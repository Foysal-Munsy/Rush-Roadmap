/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/19         *
 *    Time: 11:47:13           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

bool is_valid_name(string str)
{
    string functionName;
    regex r("\\b([a-zA-Z_][a-zA-Z0-9_]*)\\s*\\(");
    smatch match;

    if (regex_search(str, match, r))
    {
        // functionName = match.str(1);
        return true;
    }
    else
    {
        return false;
    }
}

bool is_valid_declaration(string str)
{
    if (!is_valid_name(str))
    {
        return false;
    }
    else
    {
        regex r("\\b([a-zA-Z_][a-zA-Z0-9_]*\\s+)+[a-zA-Z_][a-zA-Z0-9_]*\\s*\\(.*\\)\\s*\\{");
        smatch match;
        if (regex_search(str, match, r))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
bool is_valid_definition(string str)
{
    if (!is_valid_name(str))
    {
        return false;
    }
    else
    {
        regex r("\\b([a-zA-Z_][a-zA-Z0-9_]*\\s+)+\\s*\\(.*\\).*\\{.*\\}");
        smatch match;
        if (regex_search(str, match, r))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

void solve()
{
    string str = "void myFunction(){return;}";

    if (is_valid_declaration(str) and is_valid_definition(str))
    {
        cout << "Both are right" << nl;
    }
    else if (!is_valid_declaration(str) and !is_valid_definition(str))
    {
        cout << "Both are wrong" << nl;
    }
    else if (is_valid_declaration(str) and !is_valid_definition(str))
    {
        cout << "declaration is right but definition is wrong" << nl;
    }
    else
    {
        cout << "declaration is wrong but definition is right" << nl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
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
