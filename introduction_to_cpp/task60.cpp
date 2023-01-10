/*
Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа. Если соседних элементов одного знака нет - не выводите ничего. Если таких пар соседей несколько - выведите первую пару.*/

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
    for (int i = 1; i < a.size(); i++) {
        if (a[i] > 0 && a[i-1] > 0 || a[i] < 0 && a[i-1] < 0) {
            if (a[i] > a[i-1]) {
                cout << a[i-1] << " " << a[i];
            } else {
                cout << a[i] << " " << a[i-1];
            }
            break;
        }
    }
}