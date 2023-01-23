/*
Дана последовательность чисел, завершающаяся числом 0. Найдите сумму всех этих чисел, не используя цикл.
*/

#include <iostream>
using namespace std;

int sum(int s) {
    int n;
    cin >> n;
    if (n == 0) {
        return s;
    }
    sum(s + n);
}

int main() {
    int n = 0;
    cout << sum(n);
}