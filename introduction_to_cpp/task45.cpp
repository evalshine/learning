/*
Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    a *= 10;
    cout << fixed << setprecision(6) << int(a) % 10;
}