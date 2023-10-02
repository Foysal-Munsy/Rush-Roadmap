/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/02         *
 *    Time: 11:18:42           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
void remove_repeated_and_total_size(string s)
{
    set<char> st;
    for (auto c : s)
    {
        st.insert(c);
    }
    cout << "Remove all repeted char from string: ";
    for (auto c : st)
        cout << c;
    cout << nl << nl;
    cout << "After removing repeated char the total string value are: " << st.size() << nl << nl;
}
void remove_blank_space(string s)
{
    string st;
    cout << "After removing blank space:\n";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
            cout << s[i];
    }
    cout << nl << nl;
}
void print_string(string s)
{

    cout << "Printing string:\n";
    for (int i = 1; i <= s.size(); i++)
    {

        cout << s.substr(0, i) << nl;
    }
}
void solve()
{
    string s;
    getline(cin, s);
    remove_repeated_and_total_size(s);
    remove_blank_space(s);
    print_string(s);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/

    solve();

    return 0;
}