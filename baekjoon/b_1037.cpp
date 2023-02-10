#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n=0,result;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end());
	if (n != 1) result = num[0] * num[n-1];
	else result = num[0] * num[0];

	cout << result;

	return 0;
}