/*
Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение наибольшего элемента последовательности.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = n;
    while (n != 0) {
        if (n > max) {
            max = n;
        }
        cin >> n;
    }
    cout << max;
}