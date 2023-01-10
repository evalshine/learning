/*
Даны вещественные числа a, b, c, d, e, f. Известно, что система линейных уравнений имеет ровно одно решение. Выведите два числа x и y, являющиеся решением этой системы.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    double x, y;
    x = (e * d - b * f) / (a * d - b * c);
    y = (a * f - e * c) / (a * d - b * c);
    cout << x << " " << y;
}