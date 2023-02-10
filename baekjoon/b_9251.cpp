#include <iostream>
using namespace std;

int dp[1010][1010];
string s1,s2;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> s1;
	cin >> s2;

	for (int i = 0; i < s2.size(); i++) {//입력 + 겹치는거 저장.
		for (int k = 0; k < s1.size(); k++) {
			if (s2[i] == s1[k]) {
				dp[i + 1][k + 1] = 1;
			}
		}
	}

	for (int i = 1; i <= s2.size(); i++) {
		for (int k = 1; k <= s1.size(); k++) {
			if (dp[i][k] > 0) {
				dp[i][k] += dp[i - 1][k - 1];
			}
			else {
				dp[i][k] = max(dp[i - 1][k], dp[i][k - 1]);
			}
		}
	}


	cout << dp[s2.size()][s1.size()];
	return 0;
}


//for (int i = 0; i <= s2.size(); i++) {
//	for (int k = 0; k <= s1.size(); k++) {
//		cout << dp[i][k] << ' ';
//	}
//	cout << '\n';
//}
//cout << '\n';

//for (int i = 0; i <= s2.size(); i++) { //행렬표 출력해보기
//	for (int k = 0; k <= s1.size(); k++) {
//		cout << dp[i][k] << ' ';
//	}
//	cout << '\n';
// //}



//0 A C A Y K P
// 0 0 0 0 0
//C 0 1 1 1 1 1
//A 1 1 2 2 2 2
//P 1 1 2 2 2 3
//C 1 2 2 2 2 3
//A 1 2 3 3 3 3
//K 1 2 3 3 4 4

//    C A P C K
//  0 0 0 0 0 0
//A 0 0 1 0 0 0
//A 0 0 1 0 0 0