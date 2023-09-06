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
    /*
    aba aca aba
    ab ba ac ca //same occurance dont need to count ab ba
    */
    set<string> cnt;
    for (int i = 0; i < N - 1; i++)
    {
        string st = string() + S[i] + S[i + 1];
        cnt.insert(st);
    }
    cout << cnt.size() << nl;
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