/*
Найдите индексы первого вхождения максимального элемента.
*/

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int max_i = 0;
    int max_j = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > a[max_i][max_j]) {
                max_i = i;
                max_j = j;
            }
        }
    }
    cout << max_i << " " << max_j;
}