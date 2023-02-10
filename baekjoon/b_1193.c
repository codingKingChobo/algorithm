#include <stdio.h>
int main() {
	int n,a=1,b=1,n_cnt,start, end;

	scanf("%d", &n);
	if (n == 1) {
		printf("%d/%d", 1, 1);
	}
	else {

		while (1) {
			start = (a * (a + 1)) / 2;
			end = ((a + 1) * (a + 2)) / 2;
			//printf("start : %d, end : %d, n : %d, flr : %d\n", start, end, n, a + 1);
			if (start < n && n <= end) break;
			a++;
		}

		n_cnt = (a * (a + 1) / 2) + 1;
		a = a + 1;
		while (n_cnt != n) {
			n_cnt++;
			b++;
		}
		if (a % 2 == 0) {
			a = a - b + 1;
			printf("%d/%d", b, a);
		}
		else {
			a = a - b + 1;
			printf("%d/%d", a, b);
		}


	}
	return 0;
}
