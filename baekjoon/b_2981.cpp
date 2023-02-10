#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int gcd(int m, int n) {
	if (n == 0) return m;
	return gcd(n, m % n);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n=0,max;
	cin >> n;
	vector<int> num(n);
	vector<int> arr;
	vector<int> result;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end());

	for (int i = 0; i < n-1; i++) {
		arr.push_back(num[i + 1] - num[i]);
	}

	max = gcd(arr[0], arr[1]);

	for (int i = 2; i < arr.size(); i++) {
		max = gcd(max, arr[i]);
	}

	for (int i = 1; i <= sqrt(max); i++) {
		if (max % i == 0) {
			result.push_back(i);
			if (max / i != i) {
				result.push_back(max / i);
			}
			
		}
	}

	sort(result.begin(), result.end());

	for (int i = 1; i < result.size(); i++) {
		cout << result[i] << ' ';
	}
	return 0;
}

