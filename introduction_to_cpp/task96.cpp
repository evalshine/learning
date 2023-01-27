/*
По введенному символу определите, является ли он цифрой.
*/

#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;
    if (c >= '0' && c <= '9') {
        cout << "yes";
    } else {
        cout << "no";
    }
}