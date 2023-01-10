/*
Дана последовательность натуральных чисел x1, x2, ..., xn
Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, cnt = 0, sum = 0, sumq = 0;
    while (cin >> x, x != 0) {
        sum += x;
        sumq += x * x;
        cnt++;
    }
    cout << setprecision(11) << fixed << sqrt((sumq - sum * sum / cnt) / (cnt - 1));
}