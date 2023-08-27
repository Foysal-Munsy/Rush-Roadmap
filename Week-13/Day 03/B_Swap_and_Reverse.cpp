/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    if (!(k & 1)) // k jodi even hoy
    {
        sort(s.begin(), s.end());
    }
    else
    {
        string even = "", odd = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (i & 1)
                odd += s[i];
            else
                even += s[i];
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        for (int i = 0; i < s.size(); i++)
        {
            if (i & 1)
                s[i] = odd[i / 2];
            else
                s[i] = even[i / 2];
        }
    }
    cout << s << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}