#include <bits/stdc++.h>
using namespace std;
size_t t, a, b, c, d, e, f, n;
size_t arr[10005];

int fn(int n)
{
    for (int i = 0; i <= n; i++)
    {

        if (i == 0)
        {
            arr[i] = a;
            continue;
        }
        if (i == 1)
        {
            arr[i] = b;
            continue;
        }
        if (i == 2)
        {
            arr[i] = c;
            continue;
        }
        if (i == 3)
        {
            arr[i] = d;
            continue;
        }
        if (i == 4)
        {
            arr[i] = e;
            continue;
        }
        if (i == 5)
        {
            arr[i] = f;
            continue;
        }
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4] + arr[i - 5] + arr[i - 6];
        arr[i] = arr[i] % 10000007;
    }

    return arr[n];
}

int main()
{
    size_t ans;
    cin >> t;
    for (size_t i = 1; i <= t; i++)
    {
        cin >> a >> b >> c >> d >> e >> f >> n;
        ans = fn(n);
        ans = ans % 10000007;

        cout << "Case " << i << ": " << ans << '\n';
    }
}
