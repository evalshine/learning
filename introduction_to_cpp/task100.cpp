/*
По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool is_pol = true; 
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            is_pol = false;
            break;
        }
    }
    if (is_pol) {
        cout << "yes";
    } else {
        cout << "no";
    }
}