#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        int ans = INT_MAX;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                ans = min(ans, a[i]+a[j]+j-i);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
