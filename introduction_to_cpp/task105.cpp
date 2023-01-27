/*
Даны два списка чисел, которые могут содержать до 100000 чисел каждый. Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s1, s2;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s1.insert(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        s2.insert(x);
    }
    int cnt = 0;
    for (auto x : s1) {
        if(s2.find(x) != s2.end()) {
            cnt++;
        }
    }
    cout << cnt;
}