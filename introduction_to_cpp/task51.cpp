/*
Дан многочлен P(x)=anxn + an−1xn−1+ … + a1x + a0 и число x. Вычислите значение этого многочлена, воспользовавшись схемой Горнера
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double x;
    cin >> x;
    double a;
    double result = 0;
    int i = 0;
    while (i <= n) {
        cin >> a;
        result += a * pow(x, n - i);
        i++;
    }
    cout << result;
}