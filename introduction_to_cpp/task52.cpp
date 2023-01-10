/*
Даны действительные коэффициенты a, b, c, при этом a ≠ 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double D = b * b - 4 * a * c;
    if (D == 0) {
        cout  << -b / (2 * a);
    } else if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        if (x1 > x2) {
            double tmp = x1;
            x1 = x2;
            x2 = tmp;
        }

        cout << x1 << " " << x2;
    }
}