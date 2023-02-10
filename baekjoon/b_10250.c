#include <stdio.h>

int main() {
	int t, h, w, n, y, x;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);

		if (n % h == 0) { //x´Â È£¼ö 
			x = n / h;
			y = h;
		}

		else {
			x = n / h + 1;
			y = n % h;
		}
		if (x < 10) {
			printf("%d0%d\n", y, x);
		}
		else {
			printf("%d%d\n", y, x);
		}
	}

	return 0;
}