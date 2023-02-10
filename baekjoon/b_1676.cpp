#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int arr[501] = { 0, };
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int tmp;
		tmp = i;

		while (1) {
			if (tmp % 5 == 0) {
				arr[5]++;
				tmp /= 5;
			}
			if (tmp % 5 != 0) break;
		}
	}
	cout<<arr[5];

	return 0;
}