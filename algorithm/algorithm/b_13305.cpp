#include <iostream>
using namespace std;


long long int dist[100010], price[100010]; //도시의 기름값을 받을 price와 도시사이의 거리를 받을 dist 생성.
long long int n,total=0;

//move는 현재 위치(pos)와 지나오면서 가장 싼 기름값(cur_price)를 받아오면서 다음
//도시에서의 기름값과 비교를하며 더 싼 기름으로 교체해가며 진행함. 시간복잡도는 O(N)으로 끝날것으로 생각된다.

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