#include <iostream>

using namespace std;

int arr[1000][1000]={0,};
int dp[1000][1000];
int tmp;
int n;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int max1=0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= i; k++) {
			cin >> arr[i][k];
		}
	}


	dp[1][1] = arr[1][1];
	for (int i = 1; i < n; i++) {
		for (int k = 1; k <= i; k++) {
			tmp = dp[i][k] + arr[i + 1][k];
			if (tmp > dp[i + 1][k]) {
				dp[i + 1][k] = tmp;
			}

			tmp = dp[i][k] + arr[i + 1][k+1];
			if (tmp > dp[i + 1][k+1]) {
				dp[i + 1][k+1] = tmp;
			}
		}
	}


	for (int i = 1; i <= n; i++) {
		max1 = max(dp[n][i], max1);
	}

	cout << max1;
	return 0;
}