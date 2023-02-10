#include <stdio.h>

int main() {
	int n, prime[10001]={0,},num,cnt=0;
	scanf("%d", &n);
	prime[1] = -1;
	for (int i = 2; i <= 10000; i++) {
		if (prime[i] == 0) {
			prime[i] = 1;
			for (int j = 2; j * i <= 10000; j++) {
				prime[i * j] = -1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (prime[num] == 1) {
			cnt++;
		}
	}
	
	printf("%d", cnt);
	return 0;
}












/*
int main() {
	int n, a, cnt, result=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		cnt = 0;
		if (a == 1) {
			continue;
		}
		else if (a == 2) {
			cnt = 1;
		}
		for (int k = 2; k < a; k++) {
			if (a % k == 0) {
				cnt = -1;
				break;
			}
			else {
				cnt++;
			}
		}

		if (cnt > 0) {
			result++;
		}
	}
	printf("%d", result);
	

	return 0;
}*/