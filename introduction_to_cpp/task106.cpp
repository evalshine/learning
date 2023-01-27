/*
Даны два списка чисел, которые могут содержать до 100000 чисел каждый.  Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
*/

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    set<int> s1, s2;
    vector<int> result;
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
    for (auto x: s1) {
        if (s2.find(x) != s2.end()) {
            result.push_back(x);
        }
    }
    for (int i = 0; i < result.size() - 1; i++) {
        int index = i;
        for (int j = i + 1; j < result.size(); j++) {
            if (result[j] < result[index]) {
                index = j;
            }
        }
        int tmp = result[i];
        result[i] = result[index];
        result[index] = tmp;
    }
    for (auto s: result) {
        cout << s << " ";
    }
}