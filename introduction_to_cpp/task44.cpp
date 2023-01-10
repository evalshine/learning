/*
Дано положительное действительное число X. Выведите его дробную часть.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    cout << fixed << setprecision(6) << a - (int)a << endl;
    return 0;
}