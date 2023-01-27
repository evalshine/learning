/*
Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
*/

#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;

    if (b > a) {
        swap(b, a);
    }
    if (c > a) {
        swap(c, a);
    }
    if (c > b) {
        swap(c, b);
    }

    if (y > x) {
        swap(y, x);
    }
    if (z > x) {
        swap(z, x);
    }
    if (z > y) {
        swap(z, y);
    }

    if (a == x && b == y && c == z) {
        cout << "Boxes are equal";
    } else if (a <= x && b <= y && c <= z) {
        cout << "The first box is smaller than the second one";
    } else if (a >= x && b >= y && c >= z) {
        cout << "The first box is larger than the second one";
    } else {
        cout << "Boxes are incomparable";
    }
}