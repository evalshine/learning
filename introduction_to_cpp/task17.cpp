/*
Даны два целых числа. Программа должна вывести единицу, если первое число больше второго, двойку, если второе больше первого, или ноль, если они равны.
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << 1;
    } else if (a < b) {
        cout << 2;
    } else {
        cout << 0;
    }
}