#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long int n=0, m=0, sum=1;
	long long int arr[1001]={0,};
	cin >> n >> m;
	if (m > (n / 2)) m = n - m;

	cout << "m : " << m << " n : " << n << '\n';
	for (int i =1; i <= m; i++) {
		arr[i] = i;
		arr[n-i+1] =n-i+1;
	}


	for (int i = 1; i <= m; i++) {
		sum *= n-i+1;
		cout << " multiple sum : " << sum << "\n";
		sum /= i;
		cout << "division sum : " << sum << "\n\n";
	
	}
	
	
	cout << sum;

	return 0;
}

/*
	if (sum > 10007) {
			cout << "arr[n - i + 1] : " << arr[n - i + 1] << " arr[i] : " << arr[i]<<'\n';
			cout << "before sum : " << sum << '\n';
			sum %= 10007;
			cout << "after sum : " << sum << "\n\n";
		}
*/

#include<iostream>
using namespace std;

int N, K;
long long DP[1001][1001];

//점화식 DP[N][K] =DP[N-1][K-1] + DP[N-1][K] 

int main()
{
	cin >> N >> K;

	DP[0][0] = 1;
	DP[1][0] = 1;
	DP[1][1] = 1;

	for (int i = 2; i <= N; i++)
		for (int j = 0; j <= i; j++)
		{
			if (j == 0) DP[i][0] = 1;
			else if (j == i) DP[i][j] = 1;
			else DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j]) % 10007;
			// 매번 10007로 나눠주지 않으면 자료형의 크기를 초과하게 됨.
		}


	cout << DP[N][K];

}