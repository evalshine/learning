/*
Последовательность Фибоначчи определяется так: 

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является, то есть выведите такое число N, что F(N) = A. Если А не является числом Фибоначчи, выведите число -1.
*/

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, a = 0, b = 1;
    cin >> n;
    bool found = false;
    while (true) {
        if (b == n) {
            found = true;
            break;
        }
        if (b > n) {
            break;
        }
        int tmp = b;
        b = a + b;
        a = tmp;
        i += 1;
    }
    if (found) {
        cout << i;
    } else {
        cout << -1;
    }
    return 0;
}