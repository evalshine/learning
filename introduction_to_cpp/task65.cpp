/*
Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0])
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> base(n);
    vector<int> result(n);
    for (int i = 0; i < base.size(); i++) {
        cin >> base[i];
    }
    result[0] = base[base.size() - 1];
    for (int i = 0; i < base.size() - 1; i++) {
        result[i+1] = base[i];
    }
    for(auto el: result) {
        cout << el << " ";
    }
}