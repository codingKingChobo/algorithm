#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n=0, m=0,pos;
	string s;
	set<string> name;

	cin >> n >> m;
	vector<string> result;
	for (int i = 0; i < n; i++) {
		cin >> s;
		name.insert(s);
	}

	for (int i = 0; i < m; i++) {
		cin >> s;
		auto it = name.find(s);
		if (it != name.end()) {
			result.push_back(s);
		}
	
	}

	sort(result.begin(), result.end());
	cout << result.size() << '\n';
	for (int i = 0; i< result.size(); i++) {
		cout << result[i] << '\n';
	}
	return 0;
}