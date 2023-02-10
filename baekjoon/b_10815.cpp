#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,num,m;
	cin >> n;
	set<int> card;
	for (int i = 0; i < n; i++) {
		cin >> num;
		card.insert(num);
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> num;
		cout<< card.count(num)<<' ';
	}


	return 0;
}