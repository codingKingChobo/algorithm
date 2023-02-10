#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,cnt=0,rnk;
	cin >> n;
	vector<pair<int, int>> value(n);
	vector<int> rank(n);
	for (int i = 0; i < n; i++) {
		cin >> value[i].first >> value[i].second;
	}

	for (int i = 0; i < n; i++) {
		rnk = 1;
		for (int k = 0; k < n; k++) {
			if (k == i) continue;
			if (value[i].first < value[k].first && value[i].second < value[k].second) {
				rnk++;
				rank[cnt] = rnk;
			}
			else {
				rank[cnt] = rnk;
			}
		}
		cnt++;
	}

	for (int i = 0; i < n; i++) {
		cout << rank[i] << " ";
	}

	return 0;
}