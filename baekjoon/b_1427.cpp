#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, arr[10],i=0;
	scanf("%d", &n);

	while (1) {
		if (n < 1) break;
		arr[i++] = n % 10;
		n /= 10;
	}
	sort(arr, arr + i);

	for (int k = i-1; k>=0; k--) {
		printf("%d", arr[k]);
	}
	return 0;
}