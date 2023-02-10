#include <iostream>
using namespace std;

int arr[15][15] = { 0, };
int n,cnt=0;

void check(int x, int y, int z) {
	int tmp = 1;
	int tmp2 = 1;
	for (int i = y + 1; i <= n; i++) {
		arr[i][x] += z;
	}
	for (int i = x - 1; i >= 1; i--) {
		arr[y + tmp][i] += z;
		tmp++;
	}
	for (int i = x + 1; i <= n; i++) {
		arr[y + tmp2][i] += z;
		tmp2++;
	}
}

void dfs(int x, int y) {
	if (y == n) {
		cnt++;
		/*for (int i = 1; i <= n; i++) {
			for (int k = 1; k <= n; k++) {
				cout << arr[i][k] << ' ';
			}
			cout << '\n';
		}
		cout << "========done==========\n";*/
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (arr[y][i] == 0) {
			check(i, y, 1);
			dfs(i, y + 1);
			check(i, y, -1);
		}

	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	dfs(0,0);
	
	cout << cnt<<'\n';

	return 0;
}
