#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y, x1, y1,x_dis=0, y_dis=0,move=0,move1=1;
	cin >> x >> y >> x1 >> y1;

	x_dis = x1-x;
	y_dis = y1-y;

	if (x <= x_dis) {
		move = x;
	}
	else move = x_dis;

	if (y <= y_dis) move1 = y;
	else move1 = y_dis;

	if (move >= move1) cout << move1;
	else cout << move;
	return 0;
}