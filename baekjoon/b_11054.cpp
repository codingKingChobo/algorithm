#include <iostream>
using namespace std;

int dp[1001];
int left_cnt[1001];
int right_cnt[1001];
int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);

	int n;
	int max_length = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> dp[i];
		left_cnt[i] = 1;
		right_cnt[i] = 1;
	}

	for (int i = 1; i < n; i++) {
		for (int k = 0; k <= i; k++) {
			if (dp[k] < dp[i]) {
				left_cnt[i] = max(left_cnt[i], left_cnt[k] + 1);
			}
		}
	}


	for (int i = n-2; i >=0; i--) {
		for (int k = n - 1; k >= i; k--) {
			if (dp[i] > dp[k]) {
				right_cnt[i] = max(right_cnt[i], right_cnt[k] + 1);
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		max_length = max(max_length, right_cnt[i] + left_cnt[i]);
	}

	cout << max_length - 1;
}