#include <stdio.h>
#include <string.h>
int main() {
	int cnt = 0, length;
	char arr[1000001];
	fgets(arr, sizeof(arr), stdin);

	length = strlen(arr);
	if (arr[length - 1] == '\n') {
		arr[length - 1] = NULL;
		length -= 1;
	}
	
	for (int i = 0; i < length; i++) {
		if (((arr[i] >= 'a' && arr[i] <='z') ||( arr[i]>='A' && arr[i] <='Z')) && (arr[i + 1] == ' ' || arr[i + 1] == NULL)) cnt++;
	}

	printf("%d", cnt);
}