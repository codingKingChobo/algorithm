#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n=0,m=0,x1,x2,y1,y2,num,x,y,r;
	int c1=0, c2=0,sum;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> num;
		for (int k = 0; k < num; k++) {
			cin >> x >> y >> r;
			if ((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y) < r * r && (x2 - x) * (x2 - x) + (y2 - y) * (y2 - y) < r * r) continue;

			if ((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y) < r * r) c1++;
			if ((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y) < r * r) c2++;
		}
		sum = c1 + c2;
		cout <<sum<<'\n';
		c1 = 0;
		c2 = 0;
	}
	return 0;
}