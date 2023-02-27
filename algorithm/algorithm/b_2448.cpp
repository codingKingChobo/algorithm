#include <iostream>
using namespace std;

char star[4000][10000];

int n1;
//n = 6, k=1
void recur(int n, int x, int y) {
	if (n == 3) {
		star[y][x] = '*';
		star[y+1][x + 1] = '*';
		star[y+1][x - 1] = '*';

		for (int i = 0; i < 5; i++) {
			star[y + 2][x - 2 + i] = '*';
		}
		return;
	}

	else {
		recur(n / 2, x, y);
		recur(n / 2, x - n / 2, y + n / 2);
		recur(n / 2, x + n / 2, y + n / 2);

	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n1;

	recur(n1, n1,1);

	for (int i = 1; i <= n1; i++) {
		for (int k = 1; k <= n1*2; k++) {
			if (star[i][k] == '*') cout << '*';
			else cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}