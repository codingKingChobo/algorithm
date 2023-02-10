#include <iostream>
using namespace std;
int n;

int dp[1001][3];
int arr[1001][3];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < 3; k++) {
			cin >> arr[i][k];
		}
	}

	dp[0][0] = arr[0][0];
	dp[0][1] = arr[0][1];
	dp[0][2] = arr[0][2];

	for (int i = 1; i < n; i++) {
		dp[i][0] += arr[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] += arr[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] += arr[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
	}

	cout << min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2]));

	return 0;
}