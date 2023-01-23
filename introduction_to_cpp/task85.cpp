/*
Даны два действительных числа x и y. Проверьте, принадлежит ли точка с координатами (x, y) заштрихованному квадрату (включая его границу). Если точка принадлежит квадрату, выведите слово YES, иначе выведите слово NO
*/

#include <iostream>
using namespace std;

bool IsPointInSquare(double x, double y) {
    return (x >= -1 && x <= 1 && y <= 1 && y >= -1);
}

int main() {
    double x, y;
    cin >> x >> y;
    if(IsPointInSquare(x, y)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}