/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/17         *
 *    Time: 13:20:46           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int N;
    cin >> N;
    priority_queue<pair<int, int>> pq;
    for (int i = 0, x; i < N; i++)
    {
        cin >> x;
        pq.push(make_pair(x, i));
    }
    int n = 1;
    vector<int> ANS(N);
    for (; pq.size();)
    {
        int i = pq.top().second;
        ANS[i] = n++;
        pq.pop();
    }
    for (auto i : ANS)
        cout << i << " ";
    cout << nl;
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