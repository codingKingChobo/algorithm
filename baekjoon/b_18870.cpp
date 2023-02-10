#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n,cnt=0,size=0;
	cin >> n;
	vector<pair<int, int>> arr(n);
	vector<int> result(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i].first;
		arr[i].second = i;
	}

	sort(arr.begin(), arr.end());

	//cout << '\n';

	for (int i = 0; i < n-1; i++) {
		if (arr[i].first == arr[i + 1].first) {
			result[arr[i].second] = cnt;
			//cout << " same cnt : " << cnt << "\ni : " << i << '\n';
		}
		else {
			result[arr[i].second] = cnt++;
			//cout << " notsame cnt++ : " << cnt << "\ni : " << i << '\n';
		}
	}
	if (arr[n - 2] == arr[n - 1])  result[arr[n - 1].second] = cnt;
	else result[arr[n - 1].second] = cnt++;

	/*cout << "\nsortedfirst :";

	for (int i = 0; i < n; i++) {
		cout << arr[i].first << ' ';
	}
	cout << "\nsecond :";
	for (int i = 0; i < n; i++) {
		//cout << " " << arr[i].second << ' ';
	}
	cout << "\nresult:";*/

	for (int i = 0; i < n; i++) {
		cout << result[i] << ' ';
	}
	return 0;
}




/* 시간초과
int main() {
	int n,rpt=0,rpt1=0,cnt=0;
	cin >> n;
	vector<int> arr(n);
	vector<int> arr1(n);
	vector<int> result(n);
	vector<int> result1(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	copy(arr.begin(), arr.end(), arr1.begin()); //배열 복사.
	sort(arr.begin(), arr.end());

	for(int i = n-1; i >= 1; i--) {
		cnt = 0;
		for (int k = i-1; k >= 0 ; k--) {
			if (arr[k] != arr[k + 1]) cnt++;
		}
		result[rpt++] = cnt;
	}

	sort(result.begin(), result.end());

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			if (arr1[i] == arr[k]) {
				result1[rpt1++] = result[k];
				break;
			}
		}
	}


	cout << "sorted arr : "<<'\n';
	for (int i = n-1; i >=0; i--) {

		cout<< arr[i]<<' ';
	}

	cout << '\n';

	cout << "origin arr1 : "<<'\n';
	for (int i = 0; i < n; i++) {

		cout << arr1[i] << ' ';
	}

	cout << '\n';

	cout << "result : "<<'\n';
	for (int i = 0; i < rpt1; i++) {
		cout << result1[i] << ' ';
	}

	cout << '\n' << "repeated : " << rpt;
	return 0;
}
*/





