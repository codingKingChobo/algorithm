#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int stu, award, score[1000];
	scanf("%d %d", &stu, &award);
	for (int i = 0; i < stu; i++) {
		scanf("%d", &score[i]);
	}

	sort(score, score + stu);
	printf("%d", score[stu - award]);

	return 0;
}