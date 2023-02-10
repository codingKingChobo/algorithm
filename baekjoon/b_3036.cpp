#include <iostream>
#include <vector>
using namespace std;

int gcd(int m, int n) {
	if (n == 0) return m;
	return gcd(n, m % n);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n=0,cnt=0;
	cin >> n;
	vector<int> num(n);
	vector<int> max(n - 1);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		if (i > 0) {
			max[cnt++] = gcd(num[0], num[i]);
		}
	}

	for (int i = 0; i < n - 1; i++) {
		cout << num[0] / max[i]<<"/"<< num[i + 1] / max[i] << '\n';
	}

	return 0;
}