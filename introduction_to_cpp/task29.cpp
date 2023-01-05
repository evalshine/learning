/*
Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.
*/

#include <iostream>
using namespace std;
int main()
{
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1 <= a2 && c1 <= c2 || a1 <= a2 && b1 <= b2 || b1 <= b2 && c1 <= c2) {
        int v1 = a1 * b1 * c1;
        int v2 = a2 * b2 * c2;
        if (v1 == v2) {
            cout << "Boxes are equal";
        } else if (v1 > v2) {
            cout << "The first box is larger than the second one";
        } else {
            cout << "The first box is smaller than the second one";
        }
    } else {
        cout << "Boxes are incomparable";
    }
}