/*
Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада через год. Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int p, x, y, k;
    cin >> p >> x >> y >> k;
    int result = x * 100 + y;
    int i = 0;
    while (i != k) {
        result += result * p / 100.0;
        i++;
    }
    cout << result / 100 << " " << result % 100;
}