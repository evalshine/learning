/*
Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.). Если элементов нечетное число, то последний элемент остается на своем месте.
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
    for (int i = 1; i < a.size(); i+=2) {
        int temp = a[i-1];
        a[i-1] = a[i];
        a[i] = temp;
    }
    for (auto el: a) {
        cout << el << " ";
    }
}