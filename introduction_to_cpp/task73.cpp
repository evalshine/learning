/*
Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
*/

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int j1, j2;
    cin >> j1 >> j2;
    for (int i = 0; i < n; i++) {
        int tmp = a[i][j1];
        a[i][j1] = a[i][j2];
        a[i][j2] = tmp;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}