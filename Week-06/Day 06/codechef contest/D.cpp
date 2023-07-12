#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            if (a[i] >= m)
                ans++;
            else
                break;
        }
        cout << ans << endl;
    }
    return 0;
}
