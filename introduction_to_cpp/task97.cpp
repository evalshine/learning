/*
Переведите символ в верхний регистр.
*/

#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z') {
        cout << (char)(c - 'a' + 'A');
    } else {
        cout << c;
    }
}