#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int x1[1001]={0,}, y1[1001]={0,}, x=0, y=0;

	for (int i = 0; i < 3; i++) {
		cin >> x>> y;
		x1[x]++;
		y1[y]++;
	}

	for (int i = 0; i < 1001; i++) {
		if (x1[i] == 1) x = i;
		if (y1[i] == 1) y = i;
	}


	cout << x << " " << y;


	return 0;
}