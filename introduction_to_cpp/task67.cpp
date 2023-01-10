/*
Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
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
    vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        bool isfound = false;
        for (int j = 0; j < a.size(); j++) {
            if (i != j && a[i] == a[j]) {
                isfound = true;
                break;
            }
        }
        if (!isfound) {
            result.push_back(a[i]);
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}