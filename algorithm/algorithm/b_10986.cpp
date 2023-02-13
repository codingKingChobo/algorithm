#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> sum(1000010);

int n, m, cnt = 0;




int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		sum[i].push_back(num);
		if (num % m == 0)cnt++;
	}

	for (int i = 1; i < n; i++) {
		for (int k = 0; k < sum[i].size(); k++) {
			int tmp;
			sum[i + 1].push_back(sum[i][k] + sum[i + 1][0]);
			//	cout << sum[i][k] << " + " << sum[i + 1][0] << "="<< sum[i][k] + sum[i + 1][0]<<' ';
			tmp = sum[i][k] + sum[i + 1][0];
			if (tmp % m == 0) cnt++;
		}
		//	cout << '\n';
	}

	cout << cnt;
	return 0;
}