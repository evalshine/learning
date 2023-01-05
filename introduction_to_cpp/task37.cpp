/*
Последовательность состоит из натуральных чисел и завершается числом 0. Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = -1;
    int cnt = -1;
    while (n != 0) { 
        if (n > max) {
            max = n;
            cnt = 1;
        } else if (n == max) {
            cnt += 1;
        }
        cin >> n;
    }
    cout << cnt;
}