/*
N кеглей выставили в один ряд, занумеровав их слева направо числами от 1 до N. Затем по этому ряду бросили K шаров, при этом i-й шар сбил все кегли с номерами от li до ri включительно. Определите, какие кегли остались стоять на месте.
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> values(n);
    for (int i = 0; i < values.size(); i++) {
        values[i] = 1;
    }
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = a - 1; j < b; j++) {
            values[j] = 0;
        }
    }
    for (auto el : values) {
        if (el) {
            cout << 'I';
        } else {
            cout << '.';
        }
    }
}