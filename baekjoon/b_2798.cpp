#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, max,sum=0,comp=0;
	cin >> n;
	cin >> max;

	vector<int> num(n);

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < n-2; i++) {
		for (int k = i+1; k < n-1; k ++ ) {
			for (int j = k + 1; j < n; j++) {
				sum = num[i] + num[k] + num[j];
				if (sum <= max && sum>comp) {
					comp = sum;
				}
			}
		}
	}
	cout << comp;
	return 0;
}