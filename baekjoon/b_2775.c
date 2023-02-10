#include <stdio.h>

int main() {
	int n, flr, room,arr[15][15],sum;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &flr, &room);

		for (int k = 0; k <=flr; k++) {
			sum = 0;
			for (int j = 1; j <=room; j++) {
				if (k == 0) {
					arr[k][j] = j;
				}
				if (k != 0) {
					sum += arr[k - 1][j];
					arr[k][j] = sum;
				}
			}
		}
		printf("%d\n", arr[flr][room]);
	}

	return 0;
}