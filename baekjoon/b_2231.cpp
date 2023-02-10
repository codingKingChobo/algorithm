#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int arr[7], n,tmp,result=0;
	cin >> n;
	tmp = 1;
	while (1) {
		int sum = 0, i = 0,tmp1=0;
		tmp1 = tmp;

		while (1) {
			arr[i++] = tmp1 % 10;
			if (tmp1 / 10 == 0) break;
			tmp1 /= 10;
		}

		for (int k = 0; k < i; k++) {
			sum += arr[k] + arr[k] * pow(10, k);
		}
		if (sum == n) {
			for (int k = 0; k < i; k++) {
				result += arr[k] * pow(10, k);
			}
			cout << result;
			break;
		}
		else if (tmp > n) {
			cout << 0;
			break;
		}
		else {
			tmp++;
		}
	}


	return 0;
}