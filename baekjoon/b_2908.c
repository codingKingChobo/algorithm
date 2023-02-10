#include <stdio.h>
#include <stdbool.h>
int main() {
	char a[4], b[4];
	bool is_a_big = true;
	int n = 2;
	scanf("%s %s", a, b);
	while (1) {
		if (a[n] < b[n]) {
			is_a_big = false;
			break;
		}
		else if (a[n] == b[n]) {
			n--;
		}
		else {
			break;
		}
	}

	if (is_a_big) {
		for (int i = 2; i >= 0; i--) {
			printf("%c", a[i]);
		}
	}
	else {
		for (int i = 2; i >= 0; i--) {
			printf("%c", b[i]);
		}
	}
	return 0;
}