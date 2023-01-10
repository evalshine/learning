/*
Найдите количество положительных элементов в данном массиве.
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
    int cnt = 0;
    for (auto el: a) {
        if (el > 0) {
            cnt++;
        }
    }
    cout << cnt;
}