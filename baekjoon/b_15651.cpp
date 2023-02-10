#include <iostream>
using namespace std;

int n, m;
int arr[8] = { 0, };
int check[8] = { 0, };

void dfs(int num) {
	if (num >= m) {
		for (int i = 0; i < m; i++) {
			if (arr[i] != 0) {
				cout << arr[i] << ' ';
			}
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (check[i] <= m) {
			arr[num] = i;
			check[i]++;
			dfs(num + 1);
			check[i]--;
		}
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	dfs(0);
	return 0;
}