#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> tim;
int n, s, e;
int cnt = 1;
void gre(int e,int pos) {
	
	for (int i = pos + 1; i < tim.size(); i++) {
		if (tim[i].second >= e) {
			gre(tim[i].first, i);
			cnt++;
			break;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> e;
		tim.push_back(make_pair(e, s));
	}
	sort(tim.begin(), tim.end());
	gre(tim[0].first,0);
	cout << cnt;
	return 0;
}