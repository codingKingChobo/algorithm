#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string &a, string &b) {
	if (a.length() == b.length()) return a < b;
	return a.length() < b.length();
}
int main() {
	int n,i;
	cin >> n;
	vector<string> str(n);
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	sort(str.begin(), str.end(), compare);
	
	for (i = 0; i < n-1; i++) {
		if (str[i] == str[i + 1]) {
			continue;
		}
		else cout << str[i] << '\n';
	}
	if (i == (n - 1)) cout << str[n - 1];


	return 0;
}		
