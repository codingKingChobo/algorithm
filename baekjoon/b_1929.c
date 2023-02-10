#include <stdio.h>
#include <math.h>
int main() {
	int a, b, sum = 0, min = 10000, cnt;

	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		cnt = 0;
		if (i == 1) continue;
		if (i == 2) cnt = 1;
		if (sqrt(i) > 2) {
			for (int k = 2; k <= sqrt(i); k++) {
				if (i % k == 0) {
					cnt = -1;
					break;
				}
				else {
					cnt++;
				}
			}
		}
		else {
			for (int k = 2; k < i; k++) {
				if (i % k == 0) {
					cnt = -1;
					break;
				}
				else {
					cnt++;
				}
			}
		}
	
		if (cnt > 0) {
			printf("%d\n", i);
			}
		}

	return 0;
}