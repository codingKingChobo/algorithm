#include <iostream>

using namespace std;

int arr[10][10], save[100][2], cnt = 0;
bool row[9][10];
bool column[9][10];
bool box[9][10];
void dfs(int n) {
   //cout << " START N ->" << n << '\n';
    if (n == cnt) {
        for (int i = 0; i < 9; i++) {
            for (int k = 0; k < 9; k++) {
                cout << arr[i][k] << ' ';
            }
            cout << '\n';
        }
        exit(0);
        return;
    }

    int y, x;
    y = save[n][1];
    x = save[n][0];

    for (int i = 1; i <= 9; i++) {
        if (row[y][i] == false && column[x][i] == false && box[(y / 3) * 3 + (x / 3)][i] == false) {
            
            row[y][i] = true;
            column[x][i] = true;
            box[(y / 3) * 3 + (x / 3)][i] = true;
            arr[y][x] = i;

            dfs(n + 1);

            row[y][i] = false;
            column[x][i] = false;
            box[(y / 3) * 3 + (x / 3)][i] = false;
            arr[y][x] = 0;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 9; i++) {
        for (int k = 0; k < 9; k++) {
            cin >> arr[i][k];
            row[i][arr[i][k]] = true;
            column[k][arr[i][k]] = true;
            box[(i / 3) * 3 + (k / 3)][arr[i][k]] = true;

            if (arr[i][k] == 0) {
                save[cnt][0] = k;
                save[cnt][1] = i;
                cnt++;
            }
        }
    }

    dfs(0);
    
    return 0;
}


























/*
#include <iostream>
using namespace std;
int a[10][10];
bool c[10][10];
bool c2[10][10];
bool c3[10][10];
int n = 9;
int cnt = 0;
int square(int x, int y) {
    return (x / 3) * 3 + (y / 3);
}
bool go(int z) {
    cnt += 1;
    if (cnt >= 10000000) {
        return true;
    }
    if (z == 81) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << ' ';
            }
            cout << '\n';
        }
        return true;
    }
    int x = z / n;
    int y = z % n;
    if (a[x][y] != 0) {
        return go(z + 1);
    }
    else {
        for (int i = 1; i <= 9; i++) {
            if (c[x][i] == 0 && c2[y][i] == 0 && c3[square(x, y)][i] == 0) {
                c[x][i] = c2[y][i] = c3[square(x, y)][i] = true;
                a[x][y] = i;
                if (go(z + 1)) {
                    return true;
                }
                a[x][y] = 0;
                c[x][i] = c2[y][i] = c3[square(x, y)][i] = false;
            }
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] != 0) {
                c[i][a[i][j]] = true;
                c2[j][a[i][j]] = true;
                c3[square(i, j)][a[i][j]] = true;
            }
        }
    }
    go(0);
    return 0;
}*/