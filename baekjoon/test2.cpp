#include <iostream>
#include <stdio.h>
using namespace std;
int n, k;
int arr[1000];

void dfs(int lev, int num) {
	arr[lev] = num;
	
	if (lev == n) {
		for (int i = 1; i <= lev; i++) {
			if (arr[i] >= 10) {
				printf("%c", arr[i] + 55);

			}
			else {
				printf("%d", arr[i]);
			}
		
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < k; i++) {

		dfs(lev + 1,i);
	}
}
int main() {
	cin >> n >> k;//길이와 진수

	dfs(0, 0); //깊이 값. 

	return 0;
}