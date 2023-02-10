#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(pair<pair<int, int>, string>&a, pair<pair<int, int>, string>&b) {
	if (a.first.second == b.first.second) return a.first.first < b.first.first;
	else return a.first.second < b.first.second;
}

int main() {
	int n;
	cin >> n;

	vector <pair<pair<int,int>, string>> user(n);

	for (int i = 0; i < n; i++) {
		user[i].first.first = i;
		cin >> user[i].first.second >> user[i].second;
	}
	sort(user.begin(), user.end(),compare);
	for (int i = 0; i < n; i++) {
		cout << user[i].first.second << ' '<<user[i].second << '\n';
	}
	return 0;
}