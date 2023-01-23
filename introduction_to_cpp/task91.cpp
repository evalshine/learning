/*
Дано натуральное число n > 1. Проверьте, является ли оно простым. Программа должна вывести слово YES, если число простое и NO, если число составное.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if (IsPrime(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}