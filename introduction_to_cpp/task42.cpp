/*
Элемент последовательности называется локальным максимумом, если он строго больше предыдущего и последующего элемента последовательности. Первый и последний элемент последовательности не являются локальными максимумами.

Дана последовательность натуральных чисел, завершающаяся числом 0. Определите количество строгих локальных максимумов в этой последовательности.
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, cnt = 0;
    cin >> a;
    if (!a) {
        cout << cnt;
    } else {
        cin >> b;
        if (!b) {
            cout << cnt;
        } else {
            cin >> c;
            if (!c) {
                cout << cnt;
            } else {
                while (c != 0) {
                    if (b > c && b > a) {
                        cnt++;
                    }
                    a = b;
                    b = c;
                    cin >> c;
                }
                cout << cnt;
                return 0;
            }
        }
    }
}