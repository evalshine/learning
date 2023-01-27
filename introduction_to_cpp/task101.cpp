/*
Найдите в данной строке самое длинное слово и выведите его.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int max = 0;
    int cnt = 0;
    string word = "";
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            if (max == 0 || cnt > max) {
                max = cnt;
                result = word;
            }
            word = "";
            cnt = 0;
        } else {
            word += s[i];
            cnt++;
        }
    }
    if (word.size() > result.size()) {
        cout << word;
    } else {
        cout << result;
    }
}