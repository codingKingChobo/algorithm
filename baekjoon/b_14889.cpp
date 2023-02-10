#include <iostream>
using namespace std;

int arr[21][21],n;

int min1=10000000,gap;
bool check[21];

void dfs(int num,int pos) {
	if (num == (n / 2)) {
		int start = 0, link = 0;
		for (int i = 1; i < n; i++) {
			for (int k = i+1; k <= n; k++) {
				if (check[i] == true && check[k] == true) {
					start += arr[i][k];
					start += arr[k][i];
				}
				if (check[i] == false && check[k] == false) {
					link += arr[i][k];
					link += arr[k][i];
				}
			}
		}
		if (start > link) gap = start - link;
		else gap = link - start;
		if (min1 >=gap && start>0 && link >0) {
			min1 = gap;

		}
		return;
	}

	for (int i = pos; i < n;i++) {
			check[i] = true;
			dfs(num + 1,i+1);
			check[i] = false;
		
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n; k++) {
			cin >> arr[i][k];
		}
	}

	dfs(0,1);

	cout << min1;
	return 0;
}