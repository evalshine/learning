/*
Выведите все четные элементы массива.
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
    for (auto el: a) {
        if (el % 2 == 0) {
            cout << el << " ";
        }
    }
}