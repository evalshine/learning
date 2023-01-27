/*
Во входной строке записана последовательность чисел через пробел. Для каждого числа выведите слово YES (в отдельной строке), если это число ранее встречалось в последовательности или NO, если не встречалось.
*/

#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    set<int> s;
    int n;
    cin >> n;
    vector<string> results;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (s.find(x) == s.end()) {
            s.insert(x);
            results.push_back("NO");
        } else {
            results.push_back("YES");
        }
    }
    for (string s : results) {
        cout << s << "\n";
    }
}