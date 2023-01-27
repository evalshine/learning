/*
Дан список целых чисел, который может содержать до 100000 чисел. Определите, сколько в нем встречается различных чисел.
*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size();
}