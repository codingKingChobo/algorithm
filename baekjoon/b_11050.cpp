#include <iostream>

using namespace std;

int fact(int n) {
	if (n == 1 || n == 0) return 1;
	return n * fact(n - 1);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m,result;
	cin >> n >> m;

	result = fact(n) / (fact(n - m) * fact(m));
	cout << result;
	return 0;
}