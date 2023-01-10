/*
Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
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
    int min = 0;
    for (auto el: a) {
        if (el % 2 != 0) {
            if (min == 0 || el < min) {
                min = el;
            }
        }
    }
    cout << min;
}