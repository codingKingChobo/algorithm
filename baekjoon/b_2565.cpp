#include <iostream>
using namespace std;

int cnt[501];
int line[501];
int n;
int max1 = 0;
int rpt = 0;
int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);
	
	cin >> n;
	int left, right;
	for (int i = 1; i <= n; i++) {
		cin >> left >> right;
		line[left] = right;
		rpt = max(rpt, right);
	}

	// 8, 2, 9, 1, 4, 6, 7, 10

	for (int i = 1; i <= rpt; i++) {//비교할 선.
		if (line[i] == 0) continue;
		int val = 0;
		for (int k = 0; k <i; k++) {
			if (line[k] == 0)continue;

			if (line[k] < line[i]) {
				val = max(val, cnt[k]);
			}
		}

		cnt[i] = val + 1;
		max1 = max(max1, cnt[i]);
		
	}

	/*for (int i = 1; i <= rpt; i++) {
		cout << i << " : " << cnt[i] << '\n';
	}*/
	cout << n - max1;
	return 0;
}

/*
1 8
2 2
3 9
4 1
6 4
7 6
9 7
10 10
*/