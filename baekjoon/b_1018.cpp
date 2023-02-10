#include <iostream>

using namespace std;

int main() {
	int n, m, x = 0, y = 0, cnt = 0 , tmp[51][51],board_tmp[51][51],min=100;
	char board[51][51];
	cin >> n>>m;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cin >> board[i][k];
			if (board[i][k] == 'B') {
				tmp[i][k] = -1;
			}
			else {
				tmp[i][k] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			board_tmp[i][k] = tmp[i][k];
		}
	}


	while (1) {
		

		//B로 시작.
		for (int i = y; i < y+8; i++) {
			for (int k = x; k < x+8; k++) {
				if (i % 2 == 0 && k % 2 == 0 && tmp[i][k] == 1) {
					tmp[i][k] *= -1;
					cnt++;
				}
				else if (i % 2 == 0 && k % 2 == 1 && tmp[i][k] == -1) {
					tmp[i][k] *= -1;
					cnt++;
				}

				if (i % 2 == 1 && k % 2 == 0 && tmp[i][k] == -1) {
					tmp[i][k] *= -1;
					cnt++;
				}
				else if (i % 2 == 1 && k % 2 == 1 && tmp[i][k] == 1) {
					tmp[i][k] *= -1;
					cnt++;
				}

			}
		}

		if (cnt < min) min = cnt; // max값 변경후 cnt=0
		cnt = 0;
		
		for (int i = 0; i < n; i++) {
			for (int k = 0; k < m; k++) {
				tmp[i][k] = board_tmp[i][k];
			}
		}

		//W로 시작.
		for (int i = y; i < y+8; i++) {
			for (int k = x; k < x+8; k++) {
				if (i % 2 == 0 && k % 2 == 0 && tmp[i][k] == -1) {
					tmp[i][k] *= -1;
					cnt++;
				}
				else if (i % 2 == 0 && k % 2 == 1 && tmp[i][k] == 1) {
					tmp[i][k] *= -1;
					cnt++;
				}

				if (i % 2 == 1 && k % 2 == 0 && tmp[i][k] == 1) {
					tmp[i][k] *= -1;
					cnt++;
				}
				else if (i % 2 == 1 && k % 2 == 1 && tmp[i][k] == -1) {
					tmp[i][k] *= -1;
					cnt++;
				}

			}
		}

		if (cnt < min) min = cnt; // max값 변경후 cnt=0
		cnt = 0;

		for (int i = 0; i < n; i++) {
			for (int k = 0; k < m; k++) {
				tmp[i][k] = board_tmp[i][k];
			}
		}

		x++;
		if (x + 8 > m) {
			x = 0;
			y++;
		}

		if (y + 8 > n) break;
		
	}









	cout << min;
	return 0;
}