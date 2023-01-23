/*
Проверьте, принадлежит ли точка данной закрашенной области.
Если точка принадлежит области (область включает границы), выведите слово YES, иначе выведите слово NO.
Решение должно содержать функцию IsPointInArea(x, y), возвращающую True, если точка принадлежит области и False, если не принадлежит. Основная программа должна считать координаты точки, вызвать функцию IsPointInArea и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
Функция IsPointInArea не должна содержать инструкцию if.
*/

#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInArea(double x, double y) {
   return (pow(x+1, 2) + pow(y-1, 2) <= 4 && y >= -x && y >= 2*x + 2) 
            ||  (pow(x+1, 2) + pow(y-1, 2) >= 4  && y <= -x && y <= 2*x + 2) ;
}

int main() {
    double x, y;
    cin >> x >> y;
    if (IsPointInArea(x, y)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}