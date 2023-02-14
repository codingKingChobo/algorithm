#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> sum(1000010);
queue<int> sum1;
queue<int>tmp;
int n, m, cnt = 0;




int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		sum[i].push_back(num);
		sum1.push(num);
		if (num % m == 0)cnt++;
	}



	while (1) {
		int rpt;
		tmp.push(sum1.front());
		sum1.pop();
		rpt = tmp.size();
		cout << "rpt : " << rpt << " \n";
		while (rpt--) {
			tmp.push(tmp.front() + sum1.front());
			cout << "sum : " << tmp.front() + sum1.front() << " \n";
			if ((tmp.front() + sum1.front()) % m == 0) cnt++;
			tmp.pop();
		}

		if (sum1.size() == 1) break;
	}
	//for (int i = 1; i < n; i++) {
	//	for (int k = 0; k < sum[i].size(); k++) {
	//		int tmp;
	//		sum[i + 1].push_back(sum[i][k] + sum[i + 1][0]);
	//		cout << sum[i][k] << " + " << sum[i + 1][0] << " = "<< sum[i][k] + sum[i + 1][0]<<' ';
	//		tmp = sum[i][k] + sum[i + 1][0];
	//		if (tmp % m == 0) cnt++;
	//	}
	//		cout << '\n';
	//}

	cout << cnt;
	return 0;
}