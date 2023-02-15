#include <iostream>
#include <queue>
#include <math.h> //cnt를 통해 몇의 자리(10의 몇승) 인지 알기 위해 math.h에 포합된 pow함수 사용.
using namespace std;

string s; 
int sum = 0,cnt=-1,rpt;
bool minus_flag = false;

queue<int> num;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> s; //입력을 문자열로 받는다.
	for (int i = 0;i<s.size(); i++) {


		if (s[i] >= '0' && s[i] <= '9') {
			num.push(s[i] - '0'); // 받은 문자열이 정수이면 num이라는 큐에 추가후 몇의 자리 수인지 알기 위해 cnt에 추가.
			cnt++;
		}

		else if (s[i] == '-' && minus_flag == false) { //'-'기호가 나오면 '-'이전까지는 더한후 그 후에 나오는 모든 값은 뺀다. 괄호로 묶으면 전부 음수처리 가능. ->이를 위해 minus_flag를 true로 전환.
			minus_flag = true;
			rpt = num.size();
			for (int i = 0; i < rpt; i++) {
				sum += num.front() * pow(10, cnt);
				cnt--;
				num.pop();
			}
			cnt = -1;
		}
		else if (s[i] == '+' && minus_flag == false) { //입력받은 값이 정수가 아니고 '+' 기호면 그대로 sum에 더한다. flag = false이기 때문에 아직 '-'기호가 나온적이 없는것이므로 더한다.
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
	//마지막으로 입력된 정수는 minus_flag의 true false에 따라 계산.
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