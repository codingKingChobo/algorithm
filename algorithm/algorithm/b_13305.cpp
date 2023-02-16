#include <iostream>
using namespace std;


long long int dist[100010], price[100010];
long long int n,total=0;

void move(long long int pos, long long int cur_price) {
	if (pos == n) {
		return;
	}

	if (cur_price >= price[pos]) {
		total += price[pos] * dist[pos];
		move(pos + 1, price[pos]);
	}
	else {
		total += cur_price * dist[pos];
		move(pos + 1, cur_price);
	}

}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 1; i < n; i++) {
		cin >> dist[i];
	}
	
	for (int i = 1; i <= n; i++) {
		cin >> price[i];
	}

	move(1, price[1]);

	cout << total;
	return 0;
}