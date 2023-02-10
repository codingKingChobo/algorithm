#include <iostream>
using namespace std;

int get_max(int n, int m) {
	if (m == 0) return n;
	return get_max(m, n % m);
}


int get_min(int n, int m) {
	int max, min;
	max = get_max(n, m);
	min = (n / max) * (m / max) * max;
	return min;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, max, min,rpt=0;
	cin >> rpt;

	for (int i = 0; i < rpt; i++) {
		cin >> n >> m;
		min = get_min(n, m);
		cout << min << '\n';
	}


	
	return 0;
}