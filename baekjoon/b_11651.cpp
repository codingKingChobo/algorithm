#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int n;
	scanf("%d", &n);
	vector<pair<int, int>> arr(n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i].second, &arr[i].first);
	}

	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i].second, arr[i].first);
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

	if (A.y > B.y) return 1;

	else if (A.y == B.y) 
	{
		if (A.x > B.x) return 1;

		else return-1;
	}

	return -1;
}*/
/*
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