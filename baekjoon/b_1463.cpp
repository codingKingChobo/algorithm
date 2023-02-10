#include <iostream>
using namespace std;
int min1 = 999999;
int dp[1000000];
//void dfs(int num,int cnt) {
//	if (num == 1) {
//		if (cnt < min1) {
//			min1 = cnt;
//		}
//		return;
//	}
//
//	if (num % 3 == 0) {
//		dfs(num / 3, cnt + 1);
//	}
//	if (num % 2 == 0) {
//		dfs(num / 2, cnt + 1);
//	}
//	
//	dfs(num - 1, cnt+1);
//}



int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);

	int n, cnt = 0;
	cin >> n;
	//dfs(n, cnt);
	
	dp[n] = 0;

	while (n) {
		if (n % 3 == 0) {
			if (dp[n/3] > (dp[n] + 1) || dp[n/3] == 0 ) {
				dp[n / 3] = dp[n] + 1;
			}
		}
		if (n % 2 == 0) {
			if (dp[n / 2] > (dp[n] + 1) || dp[n / 2] == 0) {
				dp[n /2] = dp[n] + 1;
			}
		}
		if (n != 1) {
			if (dp[n -1] > (dp[n] + 1) || dp[n -1 ] == 0) {
				dp[n -1] = dp[n] + 1;
			}
		}
		n--;
	}
	//cout << min1<<'\n';
	cout << dp[1];
	return 0;
}
