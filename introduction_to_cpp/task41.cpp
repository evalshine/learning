/*
Дана последовательность натуральных чисел, завершающаяся числом 0. Определите, какое наибольшее число подряд идущих элементов этой последовательности равны друг другу. Если не нашлось ни одной пары, тройки и т.д. элементов, равных друг другу, то программа должна вывести число 1.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int prev = 0;
    int cnt = 1;
    int max_cnt = 1;
    while (n != 0) {
        prev = n;
        cin >> n;
        if (prev == n) {
            cnt += 1;
        } else {
            if (cnt > max_cnt) {
                max_cnt = cnt;
            }
            cnt = 1;
        }
    }
    cout << max_cnt;
    return 0;
}