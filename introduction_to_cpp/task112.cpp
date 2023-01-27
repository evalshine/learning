/*
Во время проведения олимпиады каждый из участников получил свой идентификационный номер – натуральное число. Необходимо отсортировать список участников олимпиады по количеству набранных ими баллов.
*/

#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.second < b.second) {
        return true;
    } else if (a.second > b.second) {
        return false;
    } else {
        if (a.first > b.first) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> pairs(n);
    for (int i = 0; i < n; i++) {
        int num, score;
        cin >> num >> score;
        pairs[i] = {num, score};
    }
    sort(pairs.begin(), pairs.end(), comp);
    reverse(pairs.begin(), pairs.end());
    for (auto pair: pairs) {
        cout << pair.first << " " << pair.second << endl;
    }
}