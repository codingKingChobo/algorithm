#include <iostream>
#include <math.h>
using namespace std;
int arr[1000];
int n,k;
void dfs(int lev, int num) {

	arr[lev] = num;

	if (lev == n) {
		for (int i = 1; i <= lev; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}


	dfs(lev + 1, 0);
	dfs(lev + 1, 1);


}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	dfs(0, 0);


	return 0;
}