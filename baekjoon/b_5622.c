#include <stdio.h>
#include <string.h>
int main() {
	char a[16];
	scanf("%s", a);
	int i=0,length = strlen(a),sum=0;
	while (i <= length) {
		switch (a[i]) {
		case 'A': case'B': case 'C':
			sum += 3;
			break;
		case 'D': case'E': case 'F':
			sum += 4;
			break;
		case 'G': case'H': case 'I':
			sum += 5;
			break;
		case 'J': case'K': case 'L':
			sum += 6;
			break;
		case 'M': case'N': case 'O':
			sum += 7;
			break;
		case 'P': case'Q': case 'R': case 'S':
			sum += 8;
			break;
		case 'T': case'U': case 'V':
			sum += 9;
			break;
		case 'W': case'X': case 'Y': case 'Z':
			sum += 10;
			break;
		}
		i++;
	}

	printf("%d", sum);
	return 0;
}
