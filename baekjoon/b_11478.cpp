#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s,tmp;
	int cnt=0;
	cin >> s;
	set<string> al;

	tmp = s[0] + s[1];
	while (1) {
		for (int i = 0; i < s.length()-cnt; i++) {
			tmp = s.substr(i, cnt+1);
			al.insert(tmp);
		}
		cnt++;
		if (s.length() == cnt) break;
	}

	cout << al.size();

	return 0;
}