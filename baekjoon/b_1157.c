#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
	int cnt=0,max, a[26]={0,},result=0;
	char arr[1000000],c;
	scanf("%s", arr);

	max = strlen(arr);

	for (int i = 0; i < max; i++) {
		if (arr[i] >= 'a') arr[i] -= 'a' - 'A';
	}

	for (int i = 0; i < max; i++) {
		a[arr[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (a[i] > result) {
			result = a[i];
			c = i+'A';
		}
	}
	for (int i = 0; i < 26; i++) {
		if (a[i] == result) {
			cnt++;
		}
	}
	if (cnt == 1) {
		printf("%c", c);
	}
	else printf("?");
	
	return 0;
}