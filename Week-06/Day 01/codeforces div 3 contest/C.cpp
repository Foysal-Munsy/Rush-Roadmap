#include <bits/stdc++.h>
using namespace std;
int t, n, m, h, a[200005], b[200005];
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> m >> h;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[j];
            }
            sort(a + 1, a + m + 1);
            int sum = 0, ans = 0;
            for (int j = 1; j <= m; j++) {
                sum += a[j];
                if (sum > h) break;
                ans++;
            }
            b[i] = ans * 1000000 + sum;
        }
        sort(b + 2, b + n + 1);
        int sum = 0, ans = 0;
        for (int j = 1; j <= m; j++) {
            sum += a[j];
            if (sum > h) break;
            ans++;
        }
        int res = ans * 1000000 + sum;
        int cnt = 1;
        for (int i = n; i >= 2; i--) {
            if (b[i] > res) cnt++;
        }
        cout << cnt << endl;
    }
}
