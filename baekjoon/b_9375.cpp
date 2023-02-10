#include <iostream>
#include <map>
#include <string>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,num,sum;
	string clothes, type;
	map<string, int> cnt;
	map<string, int>::iterator it;

	cin >> n;


	for (int i = 0; i < n; i++) {


		cin >> num;
		sum = 1;
		for (int k = 0; k < num; k++) {
			cin >> clothes >> type;

			it = cnt.find(type);
			if (it == cnt.end()) { //없는 종류일때.
				cnt.insert(make_pair(type, 2));
			}
			else {
				it->second++;
			}
		}

		for (it = cnt.begin(); it!= cnt.end(); it++) {
			sum *= it->second;
		}
		sum -= 1;
		cout << sum <<'\n';
		cnt.clear();
	}

	return 0;
}

