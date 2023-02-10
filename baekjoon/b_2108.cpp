#include <iostream>
#include <algorithm>
using namespace std;

int num[500000];

int main() {
	int n, sum = 0, mid = 0, gap = 0, cnt[8002] = { 0, }, max = 0, most_cnt = 0, value, most[100];
	double result = 0,n1;
	scanf("%d", &n);
	n1 = n * 1.0;
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);

		if (num[i] > 0) {
			cnt[4000 + num[i]]++;
		}
		else if (num[i] < 0) {
			cnt[abs(num[i])]++;
		}
		else {
			cnt[0]++;
		}
	}
	
	sort(num, num + n);
	
	for (int i = 0; i < n; i++) { // ÇÕ±¸ÇÏ±â
		sum += num[i];
	}

	for (int i = 0; i < 8002; i++) { //ÃÖºó°ª ±¸ÇÏ±â.
		if (cnt[i] >max) {
			max = cnt[i];
			if (i == 0) value = 0;

			if (i <= 4000 && i>0) {
				value = -i;
			}
			if(i>4000) {
				value = i-4000;
			}
			//printf("ÃÖºó°ª : %d, ºóµµ¼ö %d \n", i, max);
		}
	}
	for (int i = 0; i < 8002; i++) {
		if (max == cnt[i]) {
				//printf("ÃÖºó°ª : %3d, ºóµµ¼ö  : %d", i, cnt[i]);
			if (i == 0) {
				most[most_cnt++] = 0;
				//printf("ÃÖºó°ªÀº  : 0\n");
				//printf("most_cnt : %d\n", most_cnt);
			}
			if (i <= 4000 && i>0) {
				most[most_cnt++] = -i;
				//printf("ÃÖºó°ªÀº À½¼ö  : %d\n", - i);
			}
			if (i > 4000) {
				most[most_cnt++] = i - 4000;
				//printf("ÃÖºó°ªÀº ¾ç¼ö : %d\n", i - 4000);
			}
		}
	}
	sort(most, most + most_cnt);

	result = sum / n1; // »ê¼ú Æò±Õ
	if (result > -0.5 && result < 0) result = 0;

	mid = num[n / 2]; // Áß¾Ó°ª

	if (most_cnt > 1) value = most[1]; // ÃÖºó°ª

	if (n > 1) gap = num[n - 1] - num[0]; //¹üÀ§
	else gap = 0;	


	printf("%.0f\n%d\n%d\n%d", result, mid, value, gap);
	//printf("\n»ê¼úÆò±Õ : %.0f\nÁß¾Ó°ª : %d\nÃÖºó°ª : %d\n¹üÀ§ : %d", result, mid, value, gap);
	return 0;
}