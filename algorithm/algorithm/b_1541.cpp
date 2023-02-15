#include <iostream>
#include <queue>
#include <math.h> //cnt�� ���� ���� �ڸ�(10�� ���) ���� �˱� ���� math.h�� ���յ� pow�Լ� ���.
using namespace std;

string s; 
int sum = 0,cnt=-1,rpt;
bool minus_flag = false;

queue<int> num;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> s; //�Է��� ���ڿ��� �޴´�.
	for (int i = 0;i<s.size(); i++) {


		if (s[i] >= '0' && s[i] <= '9') {
			num.push(s[i] - '0'); // ���� ���ڿ��� �����̸� num�̶�� ť�� �߰��� ���� �ڸ� ������ �˱� ���� cnt�� �߰�.
			cnt++;
		}

		else if (s[i] == '-' && minus_flag == false) { //'-'��ȣ�� ������ '-'���������� ������ �� �Ŀ� ������ ��� ���� ����. ��ȣ�� ������ ���� ����ó�� ����. ->�̸� ���� minus_flag�� true�� ��ȯ.
			minus_flag = true;
			rpt = num.size();
			for (int i = 0; i < rpt; i++) {
				sum += num.front() * pow(10, cnt);
				cnt--;
				num.pop();
			}
			cnt = -1;
		}
		else if (s[i] == '+' && minus_flag == false) { //�Է¹��� ���� ������ �ƴϰ� '+' ��ȣ�� �״�� sum�� ���Ѵ�. flag = false�̱� ������ ���� '-'��ȣ�� �������� ���°��̹Ƿ� ���Ѵ�.
			rpt = num.size();
			for (int i = 0; i < rpt; i++) {
				sum += num.front() * pow(10, cnt);
				cnt--;
				num.pop();
			}
			cnt = -1;
		}
		else if ((s[i] == '-' || s[i] == '+') && minus_flag == true) {
			rpt = num.size();
			for (int i = 0; i < rpt; i++) {
				sum -= num.front() * pow(10, cnt);
				cnt--;
				num.pop();
			}
			cnt = -1;

		}

	}
	//���������� �Էµ� ������ minus_flag�� true false�� ���� ���.
	if (minus_flag) {
		rpt = num.size();
		for (int i = 0; i < rpt; i++) {
			sum -= num.front() * pow(10, cnt);
			cnt--;
			num.pop();
		}
	}
	else {
		rpt = num.size();
		for (int i = 0; i < rpt; i++) {
			sum += num.front() * pow(10, cnt);
			cnt--;
			num.pop();
		}
	}
	cout << sum;
	return 0;
}