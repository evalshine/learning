/*
Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int result = (a * 100 + b) * n;
    cout << result / 100 << " " << result % 100 << endl;
    return 0;
}