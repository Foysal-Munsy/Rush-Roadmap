/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
#define PI 3.14159265358979323846
#define nl '\n'

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty() && st.top() == '(')
                st.pop();
            else
                st.push(s[i]);
        }
    }
    if (st.empty())
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        string ans = string(n / 2, '(') + string(n / 2, '(') + string(n / 2, ')') + string(n / 2, ')');
        cout << ans << nl;
        }
}
void test()
{
    string S;
    cin >> S;
    bool same = false;
    for (int i = 1; i < S.size(); i++)
        if (S[i - 1] == S[i])
            same = true;
    if (same)
    {
        cout << "YES\n";
        for (int i = 0; i < S.size(); i++)
            cout << "()";
        cout << nl;
    }
    else if (S != "()")
    {
        cout << "YES\n";
        for (int i = 0; i < S.size(); i++)
            cout << "(";
        for (int i = 0; i < S.size(); i++)
            cout << ")";
        cout << nl;
    }
    else
        cout << "NO\n";
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        // test();
        cs++;
    }
    return 0;
}