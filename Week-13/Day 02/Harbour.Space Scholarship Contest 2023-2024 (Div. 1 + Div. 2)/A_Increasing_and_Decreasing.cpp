#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int a[n];
        if ((y - x) % n != 0)
        {
            cout << "-1\n";
            continue;
        }
        int d = (y - x) / n;
        for (int i = 0; i < n; i++)
        {
            a[i] = x + i * d;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
