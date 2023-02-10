#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int n;
	scanf("%d", &n);
	vector<pair<int,int>> arr(n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i].first, &arr[i].second);
	}

	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i].first, arr[i].second);
	}

	return 0;
}

/*
typedef struct {
	int x;
	int y;
}coord;

int compare(const void* a, const void* b) {
	coord A = *(coord*)a;
	coord B = *(coord*)b;
	if (A.x > B.x) return 1;
	else if (A.x == B.x) {
		if (A.y > B.y) return 1;
		else return-1;
	}
	return -1;
}

int main() {
	int n, i;
	coord* arr;
	scanf("%d", &n);
	i = 0;
	arr = (coord*)malloc(n * sizeof(coord));
	while (i < n) {
		scanf("%d %d", &arr[i].x, &arr[i].y);
		i++;
	}
	qsort(arr, n, sizeof(coord), compare);
	i = 0;
	while (i < n) {
		printf("%d %d\n", arr[i].x, arr[i].y);
		i++;
	}

	return 0;
}*/

/* 그냥 각각 변환.
for (int i = 0; i < n-1; i++) {
	for (int k = i + 1; k < n; k++) {
		if (x[i] > x[k]) {
			tmp = x[i];
			x[i] = x[k];
			x[k] = tmp;

			tmp = y[i];
			y[i] = y[k];
			y[k] = tmp;
		}
	}
}
for (int i = 0; i < n - 1; i++) {
	for (int k = i + 1; k < n; k++) {
		if (x[i] == x[k] && y[i]>y[k]) {
			tmp = y[i];
			y[i] = y[k];
			y[k] = tmp;
		}
	}
}*/


/* x를 정렬한뒤 기존 x의 좌표랑 정렬된 좌표차이만큼 y를 바꾼후 y를 정렬.
int x[100000], y[100000], tmp_x[100000], skip[100000] = {0,}, tmp_y[100000];//전역변수로 설정해야함.
int tmp, n, tmp_cnt=0,gap=0,k=0,tm_cnt=0,j=0;
scanf("%d", &n);

for (int i = 0; i < n; i++) {
	scanf("%d %d", &x[i], &y[i]);
	tmp_x[tmp_cnt++] = x[i];
	tmp_y[tm_cnt++] = y[i];
}
sort(x, x + n);

while (k<tmp_cnt) {
	for (int i = 0; ; i++) {
		if (tmp_x[k] == x[i] && skip[i]==0) {
			//printf("tmp_x[%d] : %d, x[%d] : %d\n", k, tmp_x[k], i, x[i]);
			gap= i-k;
			//printf("gap : %d\n", gap);

			y[k + gap] = tmp_y[k];

			skip[i]++;
			k++;
			break;
		}
	}
}


for (int i = j; i < n; i++) {
	if (x[j] == x[i + 1]) continue;
	else {
		//printf("y_sorted\n");
		sort(y + j, y + i+1);
		j = i + 1;
	}
}*/