#include <stdio.h>

int main() {
	int n, arr[1000],tmp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int k = i + 1; k < n; k++) {
			if (arr[i] > arr[k]) {
				tmp = arr[i];
				arr[i] = arr[k];
				arr[k] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}