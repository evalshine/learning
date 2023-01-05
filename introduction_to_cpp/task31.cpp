/*
Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int div = n;
    int i = 2;
    while (i <= n) {
        if (n % i == 0 && i < div) {
            div = i;
        }
        i += 1;
    }
    cout << div;
    return 0;
}