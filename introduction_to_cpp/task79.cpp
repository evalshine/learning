/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”, как показано в примере.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[30][30];
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                a[i][j] = cnt++;
            }
        } else {
            for (int j = m - 1; j >= 0; j--) {
                a[i][j] = cnt++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}