#include <stdio.h>
#include <math.h>
int prime[300000] = { 0, };
int main() {
	int n = 1;
	int cnt,prime_cnt=0;

	prime[1] = -1;

	for (int i = 2; i <= 300000; i++) {
		if (prime[i] == 0) {
			prime[i] = 1;
			for (int j = 2; j * i <= 300000; j++) {
				prime[i * j] = -1;
			}
		}
	}

	while (1) {
		cnt = 0;
		scanf("%d", &n);
		if (n == 0) break;
		for (int i = n + 1; i <= n * 2; i++) {
			if (prime[i] == 1) {
				cnt++;
			}
		}
		printf("%d\n", cnt);

	}

	return 0;
}