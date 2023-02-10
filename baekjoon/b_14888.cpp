#include <iostream>
using namespace std;
int arr[12];
int n;
int min1=100000000,max1=-100000000;
void dfs(int num, int result, int sum, int sub, int mul, int div) {
	int tmp = result;
	if (sum==0 && sub==0 && mul==0 && div==0) {
		if (min1 >=  result) min1 = result;
		if (max1 <= result) max1 = result;
		return;
	}

	if (sum != 0) {
		result += arr[num];
		dfs(num + 1, result, sum-1, sub, mul, div);
		result = tmp;
	}
	if (sub != 0) {
		result -= arr[num];
		dfs(num + 1, result, sum, sub-1, mul, div);
		result = tmp;
	}
	if (mul != 0) {
		result *= arr[num];
		dfs(num + 1, result, sum, sub, mul-1, div);
		result = tmp;
	}
	if (div != 0) {
		result /= arr[num];
		dfs(num + 1, result, sum, sub, mul, div-1);
		result = tmp;
	}
	

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int sum, sub, mul, div;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> sum >> sub >> mul >> div;

	dfs(1, arr[0], sum, sub, mul, div);

	cout << max1 << '\n' << min1;

	return 0;
}