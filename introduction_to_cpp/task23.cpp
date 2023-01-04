/*
Шахматный слон ходит по диагонали. Даны две различные клетки шахматной доски, определите, может ли слон попасть с первой клетки на вторую одним ходом.
*/

#include <iostream>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if ((x1 - x2) * (x1 - x2) == (y1 - y2) * (y1 - y2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}