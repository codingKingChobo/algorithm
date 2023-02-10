#include <stdio.h>

int main() {
	int a, b, sum=0, min=10000,cnt;

	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		cnt=0;
		if (i == 1) continue;
		if (i == 2) cnt = 1;
		for (int k = 2; k < i; k++) {
			if (i % k == 0) {
				cnt = -1;
				break;
			}
			else {
				cnt++;
			}
		}
		if (cnt > 0) {
			sum += i;
			if (i < min) {
				min = i;
			}
		}
	}

	if (sum > 0) {
		printf("%d\n%d", sum, min);
	}
	else {
		printf("%d", -1);
	}


	return 0;
}