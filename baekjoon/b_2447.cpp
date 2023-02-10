#include <iostream>
#include <math.h>
using namespace std;

char star_arr[7000][7000];

void star(int n,int n3, int y, int x) {
    if (n == 0) star_arr[y][x] = '*';
    else {
        star(n-1,n3/3, y, x);
        star(n - 1, n3 / 3, y, x + n3/3);
        star(n - 1, n3 / 3, y, x + 2 * n3 / 3);

        star(n - 1, n3 / 3, y+ n3 / 3, x);
        star(n - 1, n3 / 3, y + n3 / 3, x + 2 * n3 / 3);

        star(n - 1, n3 / 3, y+ 2* n3 / 3, x);
        star(n - 1, n3 / 3, y +2* n3 / 3, x + n3 / 3);
        star(n - 1, n3 / 3, y +2* n3 / 3, x + 2 * n3 / 3);

    }
}
int main() {

    int num;
    cin >> num;
    int n = 0,tmp=0;
    tmp = num;
    while (tmp>1) {
        tmp /= 3;
        n++;
    }

    star(n,num, 0, 0);

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++) {
            if(star_arr[i][j]=='*')cout << star_arr[i][j];
            else cout << ' ';
            
        }
        cout << '\n';
    }
}