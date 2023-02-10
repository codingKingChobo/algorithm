#include <iostream>
using namespace std;
/*long long int num(int n, int x) {
	long long int num = 0;
	for (long long int i = x; n / i >= 1; i *= x) {
		num += n / i;
	}
	return num;
}*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, cnt_t = 0, cnt_f = 0;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int tmp_m, tmp_p;
		tmp_m = i;
		tmp_p = n - i + 1;
		cout << "i is : " << i << '\n';
		while (1) {
			if (tmp_m % 2 != 0 && tmp_m % 5 != 0 && tmp_p % 5 != 0 && tmp_p % 2 != 0) {
				cout << "breaked!!\n\n";
				break;
			}
			if (tmp_m % 5 == 0) {
				cnt_f--;
				tmp_m /= 5;
				cout << "five minus, cnt_f : "<< cnt_f<<'\n';
			}

			if (tmp_m % 2 == 0) {
				cnt_t--;
				tmp_m /= 2;
				cout << "two minus, cnt_t : " << cnt_t << '\n';
			}

			if (tmp_p % 5 == 0) {
				cnt_f++;
				tmp_p /= 5;
				cout << "five plus, cnt_f : " << cnt_f << '\n';
			}
			if (tmp_p % 2 == 0) {
				cnt_t++;
				tmp_p /= 2;
				cout << "two plus, cnt_t : " << cnt_t << '\n';
			}

		}
	}
	cout << "cnt_f : " << cnt_f << " cnt_t : " << cnt_t << '\n';
	if (cnt_f >= cnt_t) cout << cnt_t;
	else if (cnt_f < cnt_t) cout << cnt_f;
	else cout << 0;
	/*long long int n, m, cnt_two = 0, cnt_five = 0;
	cin >> n >> m;
	if (m > n / 2) m = n - m;

	cnt_five = num(n, 5) - num(n - m, 5) - num(m, 5);
	cnt_two = num(n, 2) - num(n - m, 2) - num(m, 2);

	if (cnt_five > cnt_two) cout << cnt_two;
	else if (cnt_five <= cnt_two) cout << cnt_five;
	else cout << 0;*/
	return 0;
}













/*
* //동적 계획법 dp풀이.
long long int arr[10000][10000]={0,};
long long int dp(long long int n1, long long int m1) {
	if (m1 == 0 || n1 == m1) {
		arr[n1][m1] = 1;
		return arr[n1][m1];
	}
	if (arr[n1][m1] != 0) {
		return arr[n1][m1];
	}
	arr[n1][m1] = dp(n1 - 1, m1 - 1) + dp(n1 - 1, m1);
	return arr[n1][m1];
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long int n, m, result, cnt = 0;

	cin >> n>>m;
	result = dp(n, m);
	cout << result << '\n';
	while (1) {
		if (result % 10 == 0) {
			result /= 10;
			cnt++;
		}
		else break;
	}
	cout << cnt;

	return 0;
}

//(1) 5의 배수만 구해서 더하고 뺴기. 
	int n, m, tmp, sub;
	int result = 0;
	int n_cnt = 0, m_cnt = 0, tmp_cnt = 0;
	int tmp_m, tmp_n, tmp_tmp;
	int num = 25;
	if (m > n / 2) m = n - m;
	tmp = n - m;
	tmp_m = m;
	tmp_n = n;
	tmp_tmp = tmp;
	while (1) {//빼기
		if (m % 5 == 0) {
			result -= m / 5;
			break;
		}
		m--;
	}

	while (1) {
		if (n % 5 == 0) {
			result += n / 5;
			break;
		}
		n--;
	}

	while (1) {
		if (tmp % 5 == 0) {
			result -= tmp / 5;
			break;
		}
		tmp--;
	}

	while (1) {
		if (tmp_m < num && tmp_n < num && tmp_tmp < num) break;
		if (tmp_m >= num) m_cnt++;
		if (tmp_n >= num)n_cnt++;
		if (tmp_tmp >= num)tmp_cnt++;

		num *= 5;
	}
	m_cnt = (m_cnt * (m_cnt + 1)) / 2;
	n_cnt = (n_cnt * (n_cnt + 1)) / 2;
	tmp_cnt = (tmp_cnt * (tmp_cnt + 1)) / 2;
	result = result + n_cnt - m_cnt - tmp_cnt;

		
(1) 5의 배수만 구해서 더하고 뺴기.
int n, m, cnt_t=0,cnt_f=0;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int tmp_m,tmp_p;
		tmp_m = i;
		tmp_p = n - i + 1;
		//cout << "i is : " << i << '\n';
		while (1) {
			if (tmp_m % 2 != 0 && tmp_m % 5 != 0 && tmp_p % 5 != 0 && tmp_p % 2 != 0) {
				//cout << "breaked!!\n\n";
				break;
			}
			if (tmp_m % 5 == 0) {
				cnt_f--;
				tmp_m /= 5;
				//cout << "five minus, cnt_f : "<< cnt_f<<'\n';
			}

			if (tmp_m % 2 == 0) {
				cnt_t--;
				tmp_m /= 2;
				//cout << "two minus, cnt_t : " << cnt_t << '\n';
			}

			if (tmp_p % 5 == 0) {
				cnt_f++;
				tmp_p /= 5;
				//cout << "five plus, cnt_f : " << cnt_f << '\n';
			}
			if (tmp_p % 2 == 0) {
				cnt_t++;
				tmp_p /= 2;
				//cout << "two plus, cnt_t : " << cnt_t << '\n';
			}

		}
	}
	cout << "cnt_f : " << cnt_f << " cnt_t : " << cnt_t << '\n';
	if (cnt_f >= cnt_t) cout << cnt_t;
	else if (cnt_f < cnt_t) cout << cnt_f;
	else cout << 0;
*/