/*
Даны числа n и m. Заполните массив размером n × m в шахматном порядке: клетки одного цвета заполнены нулями, а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. В левом верхнем углу записано число 1.
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
    for (int i = 0; i < n; i++) {
        if (i == 0 || a[i-1][0] == 0) {
            a[i][0] = cnt++;
        } else {
            a[i][0] = 0;
        }
        for (int j = 1; j < m; j++) {
            if (a[i][j-1] != 0) {
                a[i][j] = 0;
            } else {
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