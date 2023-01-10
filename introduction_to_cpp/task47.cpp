/*
Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года. Вклад составляет X рублей Y копеек. Определите размер вклада через год.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int p, x, y;
    cin >> p >> x >> y;
    int sum = x * 100 + y;
    sum += sum * p / 100.0;
    cout << sum / 100 << " " << sum % 100 << endl;
    return 0;
}