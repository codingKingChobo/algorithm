#include <iostream>
using namespace std;
int recur = 0, dp = 0;
int arr[41];
int fibo_re(int n) {

	if (n == 1 || n == 2) {
		recur++;
		return 1;
	}
	return (fibo_re(n - 1) + fibo_re(n - 2));

}
int fibo_dp(int n) {

	arr[1] = 1;
	arr[2] = 1;
	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 1];
		dp++;
	}
	return arr[n];

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	fibo_re(n);
	fibo_dp(n);
	cout << recur << ' ' << dp;
	return 0;
}