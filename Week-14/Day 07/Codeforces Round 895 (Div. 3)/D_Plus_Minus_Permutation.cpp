#include <bits/stdc++.h>
using namespace std;
#define int long long
int t, n, x, y;
signed main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        if (x == y)
            cout << n * (n + 1) / 2 - n / x * (n / x + 1) / 2 * 2 << endl;
        else
            cout << n * (n + 1) / 2 - n / x * (n / x + 1) / 2 * 2 - n / y * (n / y + 1) / 2 * 2 + n / (x * y / __gcd(x, y)) * (n / (x * y / __gcd(x, y)) + 1) / 2 * 2 << endl;
    }
}
