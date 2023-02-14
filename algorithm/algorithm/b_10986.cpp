#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1000000 + 1;
vector<long long> cnt(M, 0);
long long pSum[MAX];
int N, M;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;


    long long result = 0;

    for (int i = 1; i <= N; i++)
    {
        int num;

        cin >> num;

        pSum[i] = (pSum[i - 1] + num) % M; //모듈러 연산 중요

        if (!pSum[i])

            result++;
        //해당 나머지의 개수를 기록

        cnt[pSum[i]]++;

    }



    //각 빈도 f에 대해 fC2를 계산

    for (int i = 0; i < M; i++)

        result += cnt[i] * (cnt[i] - 1) / 2;



    cout << result << "\n";

    return 0;

}
//#include <iostream>
//#include <queue>
//using namespace std;
//
//
//queue<int> sum1;
//queue<int> tmp;
//int n, m, cnt = 0;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int num;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> num;
//		sum1.push(num);
//		if (num % m == 0)cnt++;
//	}
//
//
//
//	while (1) {
//		int rpt;
//		tmp.push(sum1.front());
//		sum1.pop();
//		rpt = tmp.size();
//		//cout << "rpt : " << rpt << " \n";
//		while (rpt--) {
//			tmp.push(tmp.front() + sum1.front());
//			//cout << "sum : " << tmp.front() + sum1.front() << " \n";
//			if ((tmp.front() + sum1.front()) % m == 0) cnt++;
//			tmp.pop();
//		}
//
//		if (sum1.size() == 1) break;
//	}
//
//	cout << cnt;
//	return 0;
//}