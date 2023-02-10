#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c,sum=0;
	vector<int> pos;
	while (1) {
		cin >> a >> b >> c;
		if (a ==0 && b == 0 && c == 0) break;
		pos.push_back(a);
		pos.push_back(b);
		pos.push_back(c);
		sort(pos.begin(), pos.end());
		sum = (pos[0] * pos[0]) + (pos[1] * pos[1]);
		if (sum == (pos[2] * pos[2])) cout << "right\n";
		else cout<<"wrong\n";
		pos.clear();
	}


	return 0;
}