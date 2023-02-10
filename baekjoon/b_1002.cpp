#include <iostream>
#include <math.h>
#include <vector>
using namespace std;aa
#define SWAP(x,y,tmp)((tmp = x),( x=y ),(y= tmp))

struct Circle {
	int x;
	int y;
	int r;
};
int get_distance(int x, int y) {

	int distance = (x * x) + (y * y);
	return distance;
}

int get_inout(int dis, int r) {
	int r1 = r * r;
	if (dis < r1) return 0; // 원안에 두점이 있다.
	if (dis > r1) return 1; // 두점이 원밖에 있다.
	if (dis == r1) return -1;
}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n=0, x1, y1, r1,x2,y2,r2,x,y,r;
	int pos;
	int dis;
	Circle c1, c2,tmp;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> r1>> x2 >> y2 >> r2;

		if (x1 == x2 && y1 == y2 && r1 == r2) {
			cout << -1 << '\n';
			continue;
		}

		c1.x = x1;
		c1.y = y1;
		c1.r = r1;

		c2.x = x2;
		c2.y = y2;
		c2.r = r2;
		
		if (r2 > r1) { //c1이 무조건 크다.
			SWAP(c1, c2, tmp);
		}

		x = x1 - x2;
		y = y1 - y2;

		if ((r1 + r2) * (r1 + r2) == (x * x) + (y * y) || (r1 - r2) * (r1 - r2) == (x * x) + (y * y)) cout << 1 << '\n';
		else if ((r1 + r2) * (r1 + r2) < (x * x) + (y * y) || (r1 - r2) * (r1 - r2) > (x * x) + (y * y)) cout << 0 << '\n';
		else cout << 2 << '\n';
		continue;



		r = pow(r1 + r2,2);
		dis = get_distance(x, y);
		
		pos = get_inout(dis, c1.r);
		if (pos == 1) {//원밖 두점
			if (r == dis) cout << 1 << '\n';
			else if (r < dis) cout << 0 << '\n';
			else cout << 2 << '\n';
		}
		else if (pos == 0) {//원안 두점.
			if (dis == pow(c1.r - c2.r, 2)) cout << 1 << '\n';
			else if (dis < pow(c1.r - c2.r, 2)) cout << 0 << '\n';
			else cout << 2 << '\n';
		}
		else {
			cout << 2 << '\n';
		}
	}
	
	return 0;
}