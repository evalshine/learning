/*
Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров, а за ночь спускаясь на B метров. На какой день улитка доползет до вершины шеста?
*/

#include <iostream>
using namespace std;
int main()
{
    int h, a, b;
    cin >> h >> a >> b;
    cout << (h - a + a - b - 1) / (a - b) + 1 << endl;
    return 0;
}