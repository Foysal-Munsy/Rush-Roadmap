/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
int N;
int A[100];
int dep[100];
void rec(int l, int r, int d)
{
    if (l == r)
        return;
    int mx = l;
    for (int i = l; i < r; i++)
        if (A[mx] < A[i])
            mx = i;
    dep[mx] = d;
    rec(l, mx, d + 1);
    rec(mx + 1, r, d + 1);
}

void solve()
{
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    rec(0, N, 0);
    for (int i = 0; i < N; i++)
    {
        cout << dep[i];
        if (i + 1 == N)
            cout << nl;
        else
            cout << " ";
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