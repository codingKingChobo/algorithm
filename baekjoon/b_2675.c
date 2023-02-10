#include <stdio.h>
#include <string.h>
struct st {
	int rpt;
	char c[100];
};
int main() {
	struct st s[100];
	int n,cnt=0;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %s", &s[i].rpt, s[i].c);
	}

	while(1) {
		for (int i = 0; i < strlen(s[cnt].c); i++) {
			for (int k = 0; k < s[cnt].rpt; k++) {
				printf("%c", s[cnt].c[i]);
			}
		}
		printf("\n");
		cnt++;
		if (cnt > n)break;
	}
	return 0;
}