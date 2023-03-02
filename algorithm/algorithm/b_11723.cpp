#include <iostream>
using namespace std;

unsigned int S = 0;

void add(int x) {
	S |= (1 << (x - 1));
}

void remove(int x) {
	S &= ~(1 << (x - 1));
}

int check(int x) {
	return (S & (1 << (x - 1))) != 0;
}
void toggle(int x) {
	S ^= (1 << (x - 1));
}

void empty() {
	S = 0;
}
void all() {
	S = (1 << 20) - 1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,num;
	string s;
	cin >> n;
	while (n--) {
		cin >> s;
		if (s == "add") {
			cin >> num;
			add(num);
		}
		if (s == "remove") {
			cin >> num;
			remove(num);
		}
		if (s == "check") {
			cin >> num;
			cout << check(num)<<'\n';
		}
		if (s == "toggle") {
			cin >> num;
			toggle(num);
		}
		if (s == "all") {
			all();
		}
		if (s == "empty") {
			empty();
		}
	}

	return 0;
}