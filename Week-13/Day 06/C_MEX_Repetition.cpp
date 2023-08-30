/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define MAXN 100001
void constructMEX(vector<int> &arr, int N)
{
    vector<int> hash(MAXN, 0);
    for (int i = 0; i < N; i++)
    {

        hash[arr[i]] = 1;
    }
    int MexOfArr;
    for (int i = 1; i < MAXN; i++)
    {
        if (hash[i] == 0)
        {
            MexOfArr = i;
            break;
        }
    }

    vector<int> B(N);

    for (int i = 0; i < N; i++)
    {

        if (arr[i] < MexOfArr)
            B[i] = arr[i];

        else
            B[i] = MexOfArr;
    }
    for (int i = 0; i < N; i++)
        cout << B[i] << ' ';
    cout << nl;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    while (k--)
        constructMEX(v, n);
    // for (auto i : v)
    //     cout << i << " ";
    // cout << nl;
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
        cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}