#include <stdio.h>

int main() {
	int a,div=2;
	scanf("%d", &a);
	while (1) {
		if (a % div == 0) {
			printf("%d\n", div);
			a /= div;
		}
		else {
			div++;
		}
		if (a == 1) break;
	}

	return 0;
}