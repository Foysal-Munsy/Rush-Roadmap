/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/29         *
 *    Time: 16:49:54           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    deque<int> dq;
    for (char c : s)
        dq.push_back(c - '0');
    debug(dq);
    HERE;
    if (n & 1)
    {
        cout << "-1\n";
        return;
    }
    int idx = 0;
    vector<int> track;
    while (!dq.empty() and track.size() <= 300)
    {
        if (dq.front() == dq.back() and dq.front() == 1)
        {
            track.push_back(idx);
            // 01 1....1
            dq.pop_back();
            dq.push_front(1); // push 01, and dlt 0 from front logically
        }
        else if (dq.front() == dq.back() and dq.front() == 0)
        {
            // 0...0 01
            dq.pop_front();
            dq.push_back(0);
            track.push_back(idx + dq.size());
        }
        else
        {
            // 00..11
            dq.pop_back();
            dq.pop_front();
        }
        idx++;
    }
    if (track.size() > 300)
        cout << "-1\n";
    else
    {
        cout << track.size() << nl;
        for (auto i : track)
            cout << i << " ";
        cout << nl;
    }
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
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