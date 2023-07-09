#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    while (cin >> l >> r) {
        int m = -1, p;
        while (m < 9 && l <= r) {
            string x = to_string(l);
            int t = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
            if (t > m) {
                m = t;
                p = l;
            }
            l++;
        }
        cout << p << endl;
    }
    return 0;
}
