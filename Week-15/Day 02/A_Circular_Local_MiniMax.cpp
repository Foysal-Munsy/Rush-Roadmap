/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

// bool is_formal(vector<ll> &v)
// {
//     ll N = v.size();
//     sort(v.begin(), v.end());
//     vector<ll> ans(N);
//     for (ll i = 0; i < N; i++)
//         ans[i] = v[i];
//     for (ll i = 1; i < N; i++)
//     {
//         if (v[i - 1] < v[i] and v[i] > v[i + 1])
//             continue;
//         if (v[i - 1] > v[i] and v[i] < v[i + 1])
//             continue;

//         return false;
//     }
//     return true;
// }
// void operation(vector<ll> &v)
// {
//     ll N = v.size();
//     sort(v.begin(), v.end());
//     vector<ll> ans(N);
//     for (ll i = 0; i < N; i++)
//         ans[i] = v[i];
//     ll pos = 0;
//     for (int i = 0; i < N; i += 2)
//         ans[i] = v[pos++];
//     for (int i = 1; i < N; i += 2)
//         ans[i] = v[pos++];
//     cout << "YES\n";
//     for (auto i : ans)
//         cout << i << " ";
//     cout << nl;
//     return;
// }
void solve()
{
    ll N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    if (N & 1)
    {
        cout << "NO\n";
        return;
    }
    sort(A.begin(), A.end());
    bool flag = false;
    for (int i = 0; i < N / 2; i++)
    {
        if (A[i] == A[i + N / 2])
            flag = true;

        int j = i + 1 == N / 2 ? 0 : i + 1;

        if (A[j] == A[i + N / 2])
            flag = true;
    }
    if (flag)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
            cout << A[i / 2];
        else
            cout << A[i / 2 + N / 2];
        cout << (i + 1 == N ? "\n" : " ");
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