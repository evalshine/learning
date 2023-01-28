/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int cnt = 0;
    int up = 0, right = 0, down = 0, left = 0;
    while (true) {
        for (int i = up; i < m - up; i++) {
            a[up][i] = ++cnt;
        }
        up++;
        if (cnt == n * m) {
            break;
        }
        for (int i = right + 1; i < n - right; i++) {
            a[i][m-right-1] = ++cnt;
        }
        right++;
        if (cnt == n * m) {
            break;
        }
        for (int i = m - 2 - down; i >= down; i--) {
            a[n-down-1][i] = ++cnt;
        }
        down++;
        if (cnt == n * m) {
            break;
        }
        for(int i = n - 2 - left; i >= left + 1; i--) {
            a[i][left] = ++cnt;
        }
        left++;
        if (cnt == n * m) {
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}