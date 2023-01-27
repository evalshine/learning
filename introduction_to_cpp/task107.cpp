/*
Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову. Все слова в словаре различны. Для одного данного слова определите его синоним.
*/

#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string key, value;
         cin >> key >> value;
         m[key] = value;
    }
    string s;
    cin >> s;

    for (auto now : m) {
        if (now.first == s) {
            cout << now.second;
        }
        if (now.second == s) {
            cout << now.first;
        }
    }
}