#include <iostream>
#include <vector>
using namespace std;
int num[100010];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int>result;
	int n, m, s,e;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
		num[i] += num[i - 1];
	}





	for (int i = 0; i < m; i++) {
		int sum = 0;
		cin >> s >> e;
		sum = num[e];
		if (s > 1) {
			sum -= num[s - 1];
		}
		result.push_back(sum);
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}
	




	return 0;
}
