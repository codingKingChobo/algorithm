#include <iostream>
using namespace std;

// yCx ±¸ÇÏ±â.

int dfs(int right, int left) {

	if (right == left) return 1;
	else if (left == 0) return 1;
	else  return dfs(right-1 ,left-1) + dfs(right-1 ,left);
	
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, left, right;
	int sum = 1;

	cin >> n;

	
	for (int i = 0; i < n; i++) {
		cin >> left >> right;
		sum = dfs(right, left);
		cout << sum << '\n';
	}

	return 0;
}


/*
for (int k = 0; k < n; k++) {
	cin >> left >> right;

	for (int i = 1; i <= left; i++) {
		sum *= right - i + 1;
		sum /= i;
	}
	cout << sum << '\n';
	sum = 1;

}*/