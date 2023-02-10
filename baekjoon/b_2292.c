#include <stdio.h>

int main() {
	int n,start=2,end,flr=2;
	scanf("%d", &n);
	
	if (n > 1) {
		while (1) {
			start += (flr - 2) * 6;
			end = start + ((flr - 1) * 6) - 1;
			printf("start : %d, end  : %d, flr : %d\n", start, end, flr);
			if (start <= n && n <= end) break;
			flr++;
			
		}
	}
	else {
		flr = 1;
	}

	printf("%d", flr);


	return 0;
}