#include <stdio.h>
#include <string.h>

int main() {
	char a[101];
	scanf("%s", a);
	int length = strlen(a),cnt=0;

	for (int i = 0; i < length; i++) {
		if (a[i] == 'c' && (a[i + 1] == '=' || a[i + 1] == '-')) {
			cnt++;
			i++;
		}
		else if (a[i] == 'd' && a[i + 1] == 'z' && a[i + 2] == '=') {
			cnt++;
			i += 2;
		}
		else if (a[i] == 'd' && a[i + 1] == '-') {
			cnt++;
			i++;
		}
		else if ((a[i] == 'l' || a[i] == 'n') && a[i + 1] == 'j') {
			cnt++;
			i++;
		}
		else if ((a[i] == 's' || a[i] == 'z') && a[i + 1] == '=') {
			cnt++;
			i++;
		}
		else {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}