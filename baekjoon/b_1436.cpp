#include <iostream>

using namespace std;

int main() {
	int n, cnt = 0,tmp;
	cin >> n;
	while (n!=0) {
		cnt++;
		tmp = cnt;

		while (tmp!=0) {
			if (tmp % 1000 == 666) {
				n--;
				break;
			}
			else {
				tmp /= 10;
			}
		}

	}
	cout << cnt;
	return 0;
}