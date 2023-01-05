/*
Определите сумму всех элементов последовательности, завершающейся числом 0.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    while (n != 0) {
        sum += n;
        cin >> n;
    }
    cout << sum;
}