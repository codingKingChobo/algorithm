#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num[100010];

	int n, m, max1 = -10000000,sum;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> num[i];
		num[i] += num[i - 1];
	}

	for (int i = m; i <= n; i++) {
		sum = num[i] - num[i - m];
		max1 = max(max1, sum);
	}
	cout << max1;
	return 0;
}

