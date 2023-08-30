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
    int n, online, noti;
    cin >> n >> online >> noti;
    string s;
    cin >> s;
    // for(int i=0; i<noti; i++)
    // {
    //     char c;
    //     cin >> c;

    // }
    if (n == online)
    {
        cout << "YES\n";
    }
    else
    {
        int temp = online;
        for (auto c : s)
        {
            if (c == '+')
            {
                online++;
                temp++;
                if (n == online)
                    break;
            }
            if (c == '-')
            {
                online--;
            }
        }
        if (online >= n)
            cout << "YES\n";
        else if (temp >= n and online < n)
            cout << "MAYBE\n";
        else
            cout << "NO\n";
    }
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