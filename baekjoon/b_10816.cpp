#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int minus_num[10000001]={0,}, plus_num[10000001] = {0,};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,n1,m;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> n1;
		if (n1 >= 0) {
			plus_num[n1]++;
		}
		else {
			minus_num[abs(n1)]++;
		}
	}


	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> n1;
		if (n1 >= 0) {
			cout << plus_num[n1] << ' ';
		}
		else {
			cout << minus_num[abs(n1)] << ' ';
		}
	}
	return 0;
}


/*set<int> num;
for (int i = 0; i < n; i++) {
	cin >> num1;
	num.insert(num1);

}
cin >> m;
for (int i = 0; i < m; i++) {
	cin >> num1;
	n1 = num.count(num1);
	cout << n1 << ' ';
}*/