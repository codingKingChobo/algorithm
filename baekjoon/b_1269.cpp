#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n=0, m=0,n1;
	set<int>num1;
	cin >> n>>m;
	for (int i = 0; i < n; i++) {
		cin >> n1;
		num1.insert(n1);
	}
	for (int i = 0; i < m; i++) {
		cin >> n1;

		auto it = num1.find(n1);
		if (it == num1.end()) {
			num1.insert(n1);
		}
		else {
			num1.erase(n1);
		}
	}

	cout << num1.size();
	
	

	return 0;
}