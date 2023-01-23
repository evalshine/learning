/*
Дано действительное положительное число a и целоe число n.
Вычислите an. Решение оформите в виде рекурсивной функции power(a, n).
*/

#include <iostream>

using namespace std;

double power(double a, int n) {
    if (n == 0) {
        return 1;
    } else if (n > 0) {
        return a * power(a, n - 1);
    } else {
        return 1 / a * power(a, n + 1);
    }
}

int main() {
    double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
}