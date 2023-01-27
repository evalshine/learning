/*
Дана строка, содержащая пробелы. Найдите, сколько в ней слов (слово – это последовательность непробельных символов, слова разделены одним пробелом, первый и последний символ строки – не пробел).
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin ,s);
    int cnt = 1;
    for (auto c : s) {
        if (c == ' ') {
            cnt++;
        }
    }
    cout << cnt;
}