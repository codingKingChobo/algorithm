#include <iostream>
#include <vector>
using namespace std;
long long int arr[102];
long long int dp(int num) {
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	for (int i = 4; i <= num; i++) {
		arr[i] = arr[i - 2] + arr[i - 3];
	}
	return arr[num];
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long int rpt, n;
	vector<long long int> result;
	cin >> rpt;

	for (int i = 0; i < rpt; i++) {
		cin >> n; 
		result.push_back(dp(n));
		
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}

	return 0;
}