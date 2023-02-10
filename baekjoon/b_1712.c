#include <stdio.h>

int main() {
	long long int a, b, c, sold = 0;
	scanf("%lld %lld %lld", &a, &b, &c);

	if (c <= b) {
		sold = -1;
	}
	else {
		sold = a / (c - b) + 1;
	}


	printf("%lld", sold);
	return 0;
}