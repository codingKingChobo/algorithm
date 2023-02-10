#include <iostream>
#include <string.h>
using namespace std;

int recursion(const char* s, int l, int r,int cnt) {
    cnt++;
    if (l >= r) {
        cout << 1 << ' ' << cnt<<'\n';
        return 1;
    }
    else if (s[l] != s[r]) {
        cout << 0 << ' ' << cnt << '\n';
        return 0;
    }
    else return recursion(s, l + 1, r - 1,cnt);
}

int isPalindrome(const char* s,int cnt) {
    return recursion(s, 0, strlen(s) - 1,cnt);
}

int main() {
    int n;
    char st[1000][1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st[i];
        int cnt = 0;
        isPalindrome(st[i],cnt);
    }
}