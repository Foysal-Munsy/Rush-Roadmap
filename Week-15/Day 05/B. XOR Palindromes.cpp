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
    int N;
    cin >> N;
    string S;
    cin >> S;
    int one = 0, two = 0;
    for (int i = 0; i < N - i - 1; i++)
    {
        int j = N - i - 1;
        if (S[i] == S[j])
            two++;
        else
            one++;
    }
    for (int x = 0; x <= N; x++)
    {
        if (x >= one)
        {
            int t = x - one;
            if (N % 2 == 1 && t % 2 == 1)
                t--;
            if (t % 2 == 0 && t <= 2 * two)
                cout << 1;
            else
                cout << 0;
        }
        else
            cout << 0;
    }
    cout << "\n";
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