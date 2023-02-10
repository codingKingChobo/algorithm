#include <stdio.h>
#include <math.h>
int main() {
	int rpt1=0;


	//입력값보다 작은 소수.

	int rpt = 0, prime[20000] = { 0, }, cnt = 0, cnt_prime = 0;
	for (int i = 2; i <= 20000; i++) {
		if (prime[i] == 0) {
			prime[i] = 1;
			for (int j = 2; j * i <= 15000; j++) {
				prime[i * j] = -1;
			}
		}
	}

	scanf("%d", &rpt1);
	while (rpt1--) {

		//골드바흐 파티션.
		int n, a = 100000,b=0 , result[2]={0,}, prime_num[10000] = {0,}, cnt = 0, min = 10000, gap = 10001;
		scanf("%d", &n);

		for (int i = 0; i <= n; i++) { // n미만의 소수를 모두 저장.
			if (prime[i] == 1) {
				prime_num[cnt++] = i;
				//printf("%3d", i);
			}
		}

		for (int i = 0; i < cnt; i++) {
		//	printf("i : %d ", prime_num[i]);
			for (int k = 0; k < cnt; k++) {
				//printf("\n k : %d \n", prime_num[k]);
				if ((prime_num[i] + prime_num[k]) == n) {
					a = prime_num[i];
					b = prime_num[k];
					gap = abs(a - b);
				//	printf("a,b done gap : %d\n", gap);
					break;
				}
			}
			if (gap < min) {
				result[0] = a;
				result[1] = b;
				min = gap;
			//	printf("min swap: %d", min);
			}
			if (gap == 0) {
				result[0] = a;
				result[1] = b;
			//	printf("\ngap : %d, break!", gap);
				break;
			}
		}

		if (result[0] > result[1]) {
			printf("result : %d %d", result[1], result[0]);
		}
		else if (result[0] < result[1]) {
			printf("result : %d %d", result[0], result[1]);
		}
		else {
			printf("result : %d %d", result[0], result[1]);
		}
		printf("\n");

	}

	return 0;
}