/*
Шахматный ферзь ходит по диагонали, горизонтали или вертикали. Даны две различные клетки шахматной доски, определите, может ли ферзь попасть с первой клетки на вторую одним ходом.
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a == c || b == d) || ((a - c) * (a - c) == (b - d) * (b - d))) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}