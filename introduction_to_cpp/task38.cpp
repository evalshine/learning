/*
Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение второго по величине элемента в этой последовательности, то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = n;
    int prevmax = -1;
    while ( n != 0) {
        cin >> n;
        if (n > max) {
            prevmax = max;
            max = n;
        } else if (n <= max && (n > prevmax || prevmax == -1)) {
            prevmax = n;
        }
    }
    cout << prevmax;
    return 0;
}