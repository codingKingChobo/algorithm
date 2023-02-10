//#include <iostream>
//
//using namespace std;
//
//int dp[1001];
//int cnt[1001];
//int max_length = 1;
//int n;
//
//
//int main() {
//	ios::sync_with_stdio;
//	cin.tie(NULL);
//	int tmp;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> dp[i];
//		cnt[i] = 1;
//	}
//	
//
//	
//
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n-1; j++) {
//			int cnt1 = 1;
//			if (dp[i] < dp[j]) {
//				cnt1++;
//				tmp = dp[j];
//				int tmp2=10000;
//				for (int k = j+1; k < n; k++) {
//					if (tmp < dp[k]) {
//						cnt1++;
//						tmp = dp[k];
//						tmp2 = tmp;
//						cnt[i] = max(cnt[i], cnt1);
//						max_length = max(max_length, cnt[i]);
//						continue;
//					}
//					else if (dp[k] > tmp2) {
//						tmp = tmp2;
//					}
//				}
//				cout << "cnt[" << i << "] = " << cnt[i] << "i is : "<<dp[i]<<"  j is : "<<dp[j]<<'\n';
//			}
//			
//		}
//	}
//	cout << max_length;
//	return 0;
//}

#include <iostream>
using namespace std;


int dp[1001];
int cnt[1001];


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int max_length = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> dp[i];
		cnt[i] = 1;
		max_length = max(max_length, cnt[i]);
	}

	for (int i = 1; i < n; i++) {
		for (int k = 0; k <= i; k++) {
			if (dp[i] > dp[k]) {
				cnt[i] = max(cnt[i], cnt[k] + 1);
				max_length = max(max_length, cnt[i]);
			}
		}
	}

	cout << max_length;
	return 0;
}

