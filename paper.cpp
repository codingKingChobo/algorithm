#include <iostream>
#include <set>
#include <vector>
#include <cstring>
using namespace std;
int arr[20][20];

int result[20][2];
bool check[20];
int n, k,cnt=0;

int dfs(int num,int value) {
	int min = 9999;

	for (int i = num; i <= n; i++) {
		if (arr[num][i] >0) {
			check[num] = true;
			arr[num][i]--;
			result[num][0] = cnt++;
			dfs(i);
			result[num][0] = --cnt;
			arr[num][i]++;
			check[num] = false;

		}
	}

	for (int i = 1; i <= num; i++) {

		if (arr[i][num] > 0 && min > result[i][0]) {
			min = i;
		}
	}

	return min;
}

int main() {

	int a, b;
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		cin >> a >> b;
		arr[a][b]++;
		arr[b][a]++;
	}



	for (int i = 1; i <= n; i++) {
		cout << "i: " << i << '\n';
		dfs(0);
	}

	
	return 0;
}