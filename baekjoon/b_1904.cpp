#include <iostream>
using namespace std;
long long int arr[1000001];

long long int dp(long long int n) {
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= 15746;
	}
	return arr[n];
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long int n,result;
	cin >> n;
	result = dp(n);

	cout << arr[n];
	return 0;
}