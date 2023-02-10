#include <iostream>

using namespace std;
int arr[1000];
int n, k;
bool check[20];
void dfs(int lev) {
	if (lev == n) {
		/*for (int i = 0; i < lev; i++) {
			cout << arr[i]<<' ';
		}
		cout << '\n';
		*/
		for (int i = 0; i < lev; i++) {
			if (arr[i] >= 10) {
				printf("%c ", arr[i] + 55);
			}
			else {
				printf("%d ", arr[i]);
			}
		}
		cout << '\n';
		return;
	}


	for (int i = 1; i <= k; i++) {
		if (check[i] == false) {

			check[i] = true;
			arr[lev] = i;

			dfs(lev + 1);

			arr[lev] = 0;
			check[i] = false;
		}

	}
}
int main() {
	cin >> n >> k;
	dfs(0);
	return 0;
}