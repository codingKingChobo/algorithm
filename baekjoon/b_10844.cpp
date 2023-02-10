//#include <iostream>
//using namespace std;
//
//long long int n,cnt=0;
//int dp[100];
//
//void dp1(int num) {
//	if (num == n+1) {
//		cnt++;
//		cnt %= 1000000000;
//		for (int i = 1; i <= n; i++) {
//			cout << dp[i];
//		}
//		cout << '\n';
//		return;
//	}
//
//		if (dp[num-1] > 0 && dp[num-1] < 9) {
//			dp[num] = dp[num-1] + 1;
//			dp1(num + 1);
//			dp[num] = dp[num-1] - 1;
//			dp1(num + 1);
//		}
//
//		if (dp[num-1] == 0) {
//			dp[num] = dp[num - 1] + 1;
//			dp1(num + 1);
//		}
//		if (dp[num - 1] == 9) {
//			dp[num] = dp[num - 1] - 1;
//			dp1(num + 1);
//		}
//	
//}
//
//int main() {
//	ios::sync_with_stdio;
//	cin.tie(NULL);
//
//
//	cin >> n;
//
//
//
//	for (int i = 1; i <= 9; i++) {
//		dp[1] = i;
//		dp1(2);
//	}
//
//
//
//
//
//	if (n == 1) {
//		cout << "cnt : "<< 9;
//	}
//	else {
//		cout << "cnt : "<<cnt;
//	}
//
//	return 0;
//}

#include <iostream>
using namespace std;

long long int dp[102][10];

int main() {
	long long int n,sum=0;
	cin >> n;

	
	for (long long int i = 1; i < 10; i++) { //1의 자리 초기화.
		dp[1][i]++;
	}

	for (long long int i = 2; i <= n; i++) {
		for (long long int k = 0; k < 10; k++) {
			if (k >= 1 && k <= 8) {
				dp[i][k] = (dp[i - 1][k - 1] % 1000000000) +( dp[i - 1][k + 1] % 1000000000);
			}
			if (k == 0) {
				dp[i][k] = (dp[i - 1][k+1] % 1000000000);
			}
			if (k == 9) {
				dp[i][k] = (dp[i - 1][k - 1] % 1000000000);
			}
		}
	}

	for (long long int i = 0; i < 10; i++) {
		sum += dp[n][i];
	}

	cout << sum%1000000000;
	return 0;
}
