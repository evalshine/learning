/*
Напишите функцию min(a, b), вычисляющую минимум двух чисел. Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min. Считайте четыре целых числа и выведите их минимум.
*/

#include <iostream>
using namespace std;

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int min4(int a, int b, int c, int d) {
    int e = min(a, b);
    int x = min(c, d);
    if (e < x) {
        return e;
    }
    return x;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min4(a, b, c, d) << endl;
    return 0;
}