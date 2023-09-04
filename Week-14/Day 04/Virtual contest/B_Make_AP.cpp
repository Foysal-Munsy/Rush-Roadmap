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
    int a, b, c;
    cin >> a >> b >> c;
    if (b - a == c - b)
        cout << "YES\n";
    else
    {
        // b-a == c-b <main equtation>
        // A--> a = 2b-c
        // B--> 2b = c+a
        // C--> c = 2b-a

        int A = (2 * b) - c;
        int B = (c + a);
        int C = (2 * b) - a;
        if (A > 0 and A % a == 0)
            cout << "YES\n";
        else if (B > 0 and B % (2 * b) == 0)
            cout << "YES\n";
        else if (C > 0 and C % c == 0)
            cout << "YES\n";
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
/*
10 5 30 ->yes
30 5 10 ->yes
1 2 3 ->yes
1 6 3 ->yes
2 6 3 ->no
1 1 1->yes
1 1 2-> no
1 1 3 ->yes
1 100000000 1 ->yes
2 1 1 ->no
1 2 2 ->yes
*/