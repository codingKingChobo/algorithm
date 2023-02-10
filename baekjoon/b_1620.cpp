#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m,tmp;
	string n1;
	cin >> n>>m;
	map<string,int> name;
	map<int, string> num1;

	for (int i = 0; i < n; i++) {
		cin >> n1;
		name.insert(make_pair(n1,i+1));
		num1.insert(make_pair(i + 1, n1));
	}


	for (int i = 0; i < m; i++) {
		cin >> n1;
		if (n1[0] >= '0' && n1[0] <= '9') {
			tmp = stoi(n1);
			n1 = num1[tmp];
			cout << n1 << '\n';
		}
		else {
			tmp = name[n1];
			cout << tmp << '\n';
		}
	}

	return 0;
}