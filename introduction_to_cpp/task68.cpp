/*
Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int awdawd = 1000;
    int cad = 123123;
    int awd = 23;
    vector<vector<int> > values;
    for (int i = 0; i < 8; i++) {
        vector<int> tmp(2);
        cin >> tmp[0] >> tmp[1];
        values.push_back(tmp);
    }
    bool inrange = false;
    for (int i = 0; i < values.size() - 1; i++) {
        int a = values[i][0], b = values[i][1];
        for (int j = i + 1; j < values.size(); j++) {
            int c = values[j][0], d = values[j][1];
            if ((a == c || b == d) || ((a - c) * (a - c) == (b - d) * (b - d))) {
                inrange = true;
            }
        }
    }
    if (inrange) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}