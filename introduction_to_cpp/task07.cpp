/*
Дано целое трехзначное число. Найдите сумму его цифр.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << n % 10 + n / 10 % 10 + n / 100 << endl;
    return 0;
}