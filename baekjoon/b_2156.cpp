#include <iostream>
using namespace std;
int dp[10001];
int sum[10001];
int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);
	

	int n;

	cin >> n;
	
			
	for (int i = 0; i < n; i++) {
		cin >> dp[i];
		sum[0] = dp[0];

		if (dp[i] == 0) {
			sum[i] = max(sum[i - 1], sum[i]);
			continue;
		}

		int first = 0, second = 0;
		if (i >= 2) {
			second = dp[i] + sum[i - 2]; // 직전의 포도주 잔을 고르지 않은 경우.
		}
		if (i >= 1) {
			first = dp[i] + dp[i - 1]; // 직전의 포도주 잔을 고른 경우.
		}
		if (i >= 3) {
			first += sum[i - 3];
		}
		if (i >= 1) {
			sum[i] = max(first, second);
			sum[i] = max(sum[i - 1], sum[i]);
		}

	}
	int max1 = 0;
	for (int i = 0; i < n; i++) {
		//cout << "sum[" << i << "] = " << sum[i]<<'\n';
		max1 = max(sum[i], max1);
	}
	cout << max1;


	return 0;
}
