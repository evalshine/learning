/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[100][100];

    int cnt = 1;
    for (int j = 0; j < m; j++) {
        for (int i = 0, k = j; i < n && k >= 0; i++, k--) {
            a[i][k] = cnt++;
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = m - 1, k = i; j >= 0 && k < n; j--, k++) {
            a[k][j] = cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}