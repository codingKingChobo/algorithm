#include <iostream>
using namespace std;
int arr[21][21][21];


int dp(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}

	if (a > 20 || b > 20 || c > 20) {
		return dp(20, 20, 20);
	}

	if (arr[a][b][c] != 0) return arr[a][b][c];

	if (a < b && b < c) {
		arr[a][b][c] = dp(a, b, c - 1) + dp(a, b - 1, c - 1) - dp(a, b - 1, c);
		return arr[a][b][c];
	
	}

	arr[a][b][c] = dp(a - 1, b, c) + dp(a - 1, b - 1, c) + dp(a - 1, b, c - 1) - dp(a - 1, b - 1, c - 1);
	return arr[a][b][c];

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	while (1) {
		int result1;
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;
		result1 = dp(a,b,c);
		cout << "w(" << a << ", " << b << ", " << c << ") = " << result1 << '\n';
	}
	return 0;
}
