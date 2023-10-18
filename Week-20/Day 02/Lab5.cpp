/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/14         *
 *    Time: 12:04:55           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
bool is_valid(string s)
{
    stack<char> st;
    map<char, char> mp = {{')', '('}, {'}', '{'}, {']', '['}};
    for (char c : s)
    {
        if (c == '(' or c == '{' or c == '[')
        {
            st.push(c);
        }
        else if (c == ')' or c == '}' or c == ']')
        {
            if (st.empty() or mp[c] != st.top())
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

bool is_proper(string S)
{
    if (S.empty() or (!(S[0] >= 'a' and S[0] <= 'z') and !(S[0] >= 'A' and S[0] <= 'Z') and S[0] != '_'))
    {
        return false;
    }
    for (char c : S)
    {
        if (!(c >= 'a' and c <= 'z') and !(c >= 'A' and c <= 'Z') and !(c >= '0' and c <= '9') and c != '_')
        {
            return false;
        }
    }
    return true;
}

void check_math_equation(string s)
{
    if (is_valid(s))
        cout << "This mathematical equation is properly parenthesized.\n";
    else
        cout << "Not parethesized.\n";
}
void check_proper_variable(string s)
{
    if (is_proper(s))
        cout << "This is a proper variable name.\n";
    else
        cout << "Not proper.\n";
}
void solve()
{
    string s;
    getline(cin, s);

    /*need to comment out the exact function to check my desire output*/

    // check_math_equation(s);
    check_proper_variable(s);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}