#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<ll> prefix_sum(n);
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; ++i)
    {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    for (int k = 1; k < n; ++k)
    {
        cout << prefix_sum[k - 1] << '\n';
    }

    return 0;
}
