#include <iostream>
using namespace std;

int arr[301] = { 0, };
int dp1[301], dp2[302];
int n;
int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dp1[1] = arr[1];
	dp1[2] = arr[1] + arr[2];

	dp2[1] = arr[1];
	dp2[2] = arr[2];

	dp1[3] = dp2[2] + arr[3];
	dp2[3] = dp1[1] + arr[3];

	for (int i = 4; i <= n; i++) {
		dp1[i] = dp2[i - 1] + arr[i];
		dp2[i] = max(dp1[i - 2] + arr[i], dp2[i - 2] + arr[i]);
	}

	cout << max(dp1[n], dp2[n])<<"\n\n";
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	for (int i = 1; i <= n; i++) {
		cout << dp1[i] << ' ';
	}
	cout << '\n';
	for (int i = 1; i <= n; i++) {
		cout << dp2[i] << ' ';
	}
	return 0;
}

