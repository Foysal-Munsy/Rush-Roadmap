/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/09         *
 *    Time: 11:25:32           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
void is_identifire(string s)
{
    vector<string> ans;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' '))
    {
        ans.push_back(word);
    }
    size_t comment = s.find("//");

    for (auto c : ans)
    {
        if (!c.find("//"))
        {
            continue;
        }
        else
        {
            if (!c.find("' '"))
                cout << c << " ";
        }
    }
    cout << nl;
}
void solve()
{
    string fileName("/Users/mrfm/Documents/XPSC/Rush-Roadmap/Week-19/Day04/input.txt");
    ifstream myfile(fileName);
    if (!myfile)
    {
        cout << -1 << nl;
        return;
    }
    string s;
    vector<string> vec, ans;
    while (getline(myfile, s))
    {

        // find out comment from a input file:
        // size_t comment = s.find("//");
        // if (comment != string ::npos)
        // {
        //     cout << "Comment: " << s.substr(comment) << nl;
        // }

        // find out identifier from input file:
        is_identifire(s);
    }
    myfile.close();
    // for (auto i : vec)
    //     cout << i << " ";
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