#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
	int n, length, cnt,rpt=0;
	bool flag = true;
	char a[100], alpha[2];
	scanf("%d", &n);
	cnt = n;
	while (rpt<n) {
		scanf("%s", a);
		length = strlen(a);
		for (int i = 0; i < length-1; i++) {
			if (flag==false) {
				//printf("word fin\n");
				break;
			}
			if (a[i] == a[i+1]) {
				//printf("continued\n");
				continue;
			}
			if (a[i] != a[i+1]) {
				//printf("start: %c\n", a[i]);
				alpha[0] = a[i];
			}
			for (int k = i + 2; k < length; k++) {
				if (alpha[0] == a[k]) {
					cnt--;
					//printf("a[%d] : breaked\n",k);
					//printf("cnt : %d\n", cnt);
					flag = false;
					break;
				}
			}
			
		}
		flag = true;
		rpt++;
	}
	printf("%d", cnt);
	return 0;
}