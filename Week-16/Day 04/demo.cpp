#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int min_val = INT_MAX, max_val = INT_MIN;
    for (int j = 0; j < m; j++)
    {
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            x ^= (a[i] | b[j]);
        }
        min_val = min(min_val, x);
        max_val = max(max_val, x);
    }

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x ^= a[i];
    }
    min_val = min(min_val, x);

    cout << "Minimum value of x: " << min_val << endl;
    cout << "Maximum value of x: " << max_val << endl;

    return 0;
}
