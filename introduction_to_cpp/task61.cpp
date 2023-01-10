/*
Выведите значение наименьшего из всех положительных элементов в массиве. Известно, что в массиве есть хотя бы один положительный элемент.
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
    int min = -1;
    for(auto el: a) {
        if (el > 0) {
            if (min == -1 || el < min) {
                min = el;
            }
        }
    }
    cout << min;
}