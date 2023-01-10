/*
Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
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
    int cnt = 1;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] != a[i-1]) {
            cnt++;
        }
    }
    cout << cnt;
}