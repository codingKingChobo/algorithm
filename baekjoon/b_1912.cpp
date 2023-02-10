#include <iostream>
#include <set>
using namespace std;

set<int> result;


//void dp1(int num,int sum1) {
//	if (num == n) return;
//
//	for (int i = num; i < n; i++) {
//		if (arr[i] >= 0) sum1 += arr[i];
//		else {
//			result.insert(sum1);
//			sum1 += arr[i];
//
//			dp1(i + 1, sum1);
//		}
//	}
//}
//
//void dp(int num) {
//	int sum = 0;
//
//	for (int i = num; i < n; i++) {
//		if (arr[i] >=0) {
//			sum += arr[i];
//		}
//		else {
//			result.insert(sum);
//			sum += arr[i];
//			dp1(i+1,sum);
//			sum = 0;
//			
//		}
//	}
//}
/*
if (cnt == n) {
		for (int i = 0; i < n; i++) {
			result.insert(arr[i]);
		}
	}
	else {
		dp(0);
	}
*/
int dp[100000];
int n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin >> n;
	cin >> num;
	dp[0] = num;
	int maxv = dp[0];
	for (int i = 1; i < n; i++) {
		cin >> num;
		dp[i] = max(num + dp[i - 1], num);
		maxv = max(maxv, dp[i]);
	}
	
	//auto to = result.end();
	// to--;
	cout << maxv;
	return 0;
}