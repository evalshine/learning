/*
По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i *= 2;
    }
    return 0;
}