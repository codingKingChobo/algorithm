#include <stdio.h>

int main() {
	int a, b, v,day;
	scanf("%d %d %d", &a, &b, &v);

	day = (v - b) / (a - b);
	if ((v - b) % (a - b) == 0) {
		printf("나머지 없음 %d", day);
	}
	else printf("나머지 잇음 올림.%d", day+1);

	return 0;
}
