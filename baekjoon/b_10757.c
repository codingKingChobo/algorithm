#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int sub,rpt,cnt=0, result[10001]={0,};
	char a[10001], b[10001];
	int a1, b1;
	scanf("%s %s", a, b);
	a1 = strlen(a);
	b1 = strlen(b);

	//앞자리 0으로 채우기.
	sub = abs(a1 - b1);
	if (a1 > b1) {
		for (int i = b1-1; i >=0; i--) {
			b[i + sub] = b[i];
		}
		for (int i = 0; i < sub; i++) {
			b[i] = '0';
		}
		rpt = a1;
	}
	else if (a1 < b1) {
		for (int i = a1-1; i>=0; i--) {
			a[i + sub] = a[i];
		}
		for (int i = 0; i < sub; i++) {
			a[i] = '0';
		}
		rpt = b1;
	}
	else {
		rpt = a1;
	}

	//더하기.
	for(int i = rpt-1; i >= 0; i--) {
		result[cnt++] = a[i] -'0' + b[i]-'0';
	}

	for (int i = 0; i < cnt ; i++) {
		if (result[i] >= 10) {
			result[i] = result[i] -10;
			if (i >= cnt - 1) cnt++;
			result[i + 1]++;
		}
	}
	for (int i = cnt-1; i >=0; i--) {
		printf("%d", result[i]);
	}


	return 0;
}