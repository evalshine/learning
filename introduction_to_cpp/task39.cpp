/*
Последовательность Фибоначчи определяется так:

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

По данному числу N определите N-е число Фибоначчи F(N).
*/

#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1, i = 1;
    cin >> n;
    while (i != n) {
        int tmp = b;
        b = a + b;
        a = tmp;
        i += 1;
    }
    cout << b;
}