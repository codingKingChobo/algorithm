#include <stdio.h>
int main() {
	int n, arr[10001]={0,},a=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		arr[a]++;
	}

	for (int i = 0; i <= 10000; i++) {
		if (arr[i] > 0) {
			for (int k = 0; k < arr[i]; k++) {
				printf("%d\n", i);
			}
		}
	}
	return 0;
}