#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string n1;
	int n, m,cnt=0;

	cin >> n >> m;
	set<string> word;

	for (int i = 0; i < n; i++) {
		cin >> n1;
		word.insert(n1);
	}

	for (int i = 0; i < m; i++) {
		cin >> n1;
		if (word.count(n1)) {
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}