#include <iostream>
#include <vector>
#include <set>

using namespace std;


int n,s, e;

void cnt_rm(int num) {

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s >> e;

	}


	return 0;
}
































//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<pair<int,int>> room;
//bool check_room[1000010];
//int n, s, e,max1=0;
//
//void count_room(int pos, int next,int cnt) {
//	max1 = max(cnt, max1);
//	for (int i =pos; i < n; i++) {
//
//		if (next <= room[i].first && check_room[i] == false) {
//			check_room[i] = true;
//			count_room(i,room[i].second,cnt+1);
//			check_room[i] = false;
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//	
//	cin >> n;
//	for(int i = 0 ; i <n  ; i++){
//		cin >> s>>e;
//		room.push_back(make_pair(s, e));
//	}
//
//	sort(room.begin(), room.end());
//
//	for (int i = 0; i < n; i++) {
//		check_room[i] = true;
//		count_room(i, room[i].second,1);
//		check_room[i] = false;
//	}
//
//	cout << max1;
//	return 0;
//}