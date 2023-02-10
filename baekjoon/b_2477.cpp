#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

/* 
µ¿ : 1
¼­ : 2
³² : 3
ºÏ : 4
*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n = 0,pos=0;
	int pos_back, pos_next;
	int dir, dis, a=0,b=0,s_w=0,b_w=1,max=0;
	int num[6][2];

	vector<int> A;
	cin >> n;

	for (int i = 0; i < 6; i++) {
		cin >> dir >> dis;
		A.push_back(dis);
		if (dis > max) {
			max = dis;
			pos = i;
		}
	}

	if (pos == 0) {
		pos_back = A.size() - 1;
		pos_next = 1;
	}
	else if (pos == A.size() - 1) {
		pos_back = pos - 1;
		pos_next = 0;
	}
	else {
		pos_back = pos - 1;
		pos_next = pos + 1;
	}


	if (A[pos_back] > A[pos_next]) {
		a = pos + 2;
		b = pos + 3;

		if (a >= A.size()) {
			a -= A.size();
		}
		
		if (b >= A.size()) {
			b -= A.size();
		}

		s_w = A[a] * A[b];
		b_w = A[pos] * A[pos_back];
	}


	else {
		a = pos - 2;
		b = pos - 3;

		if (a < 0) {
			a += A.size();
		}
		if (b < 0) {
			b += A.size();
		}
		s_w = A[a] * A[b];
		b_w = A[pos] * A[pos_next];
	}
	

	int sum = b_w - s_w;
	sum *= n;
	cout << sum;

	return 0;
}