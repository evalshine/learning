/*
Определите среднее значение всех элементов последовательности, завершающейся числом 0.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, sum = 0, cnt = 0;
    while (cin >> a, a != 0) {
        sum += a;
        cnt++;
    }
    cout << setprecision(6) << fixed << double(sum) / cnt;
}