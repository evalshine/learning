/*
Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
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
    for (int i = 1; i < a.size(); i++) {
        if (a[i] > a[i - 1]) { 
            cout << a[i] << " ";
        }
    }
}