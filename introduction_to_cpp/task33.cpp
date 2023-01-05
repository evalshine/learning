/*
Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    bool f = false;
    while (i <= n) {
        if (i == n) {
            f = true;
        }
        i *= 2;
    }
    if (f) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}