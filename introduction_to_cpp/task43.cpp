/*
Определите наименьшее расстояние между двумя локальными максимумами последовательности натуральных чисел, завершающейся числом 0. Если в последовательности нет двух локальных максимумов, выведите число 0.

Начальное и конечное значение при этом локальными максимумами не считаются.

Расстоянием считается количество пробелов между элементами. В качестве примера смотрите первый тест.
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, cnt = 0;
    int min_cnt = 0;
    int i = 0;
    cin >> a;
    if (!a) {
        cout << cnt;
    } else {
        cin >> b;
        if (!b) {
            cout << cnt;
        } else {
            cin >> c;
            if (!c) {
                cout << cnt;
            } else {
                while (c != 0) {
                    if (b > c && b > a) {
                        i++;
                        if (i == 2) {
                            min_cnt = cnt;
                        } else if (i > 2 && cnt < min_cnt) {
                            min_cnt = cnt;
                        }
                        cnt = 0;
                    }
                    a = b;
                    b = c;
                    cin >> c;
                    cnt++;
                }
                cout << min_cnt;
                return 0;
            }
        }
    }
}