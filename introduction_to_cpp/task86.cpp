/*
Даны два действительных числа x и y. Проверьте, принадлежит ли точка с координатами (x, y) заштрихованному квадрату (включая его границу). Если точка принадлежит квадрату, выведите слово YES, иначе выведите слово NO
*/

#include <iostream>
#include <cmath>

using namespace std;

double IsPointInSquare(double x, double y) {
    return abs(x) + abs(y) <= 1;
}

int main() {
    double x, y;
    cin >> x >> y;
    if (IsPointInSquare(x, y)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}