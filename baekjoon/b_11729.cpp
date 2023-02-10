#include <iostream>
using namespace std;


void move(int n, int a, int b, int c){
	if (n == 1) {
		cout << a << " " << b << '\n';

	}
	else {
		move(n - 1, a, c, b);
		move(1, a, b, c);
		move(n - 1, c,b, a);
	}
}
	

int main() {
	int n;
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	move(n, 1, 3, 2);
	

	return 0;
}