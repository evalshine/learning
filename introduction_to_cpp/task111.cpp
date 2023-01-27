/*
В обувном магазине продается обувь разного размера. Известно, что одну пару обуви можно надеть на другую, если она хотя бы на три размера больше. В магазин пришел покупатель. Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец так, чтобы он смог надеть их все одновременно.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int s;
    cin >> s;
    int n;
    cin >> n;
    vector<int> sizes(n);
    for (int i = 0; i < n; i++) {
        cin >> sizes[i];
    }
    sort(sizes.begin(), sizes.end());
    int cnt = 0;
    for (int el : sizes) {
        if (cnt == 0) {
            if (el >= s) {
                s = el;
                cnt++;
            }
        } else {
            if (s+3 <= el) {
                s = el;
                cnt++;
            }
        }
    }
    cout << cnt;
}