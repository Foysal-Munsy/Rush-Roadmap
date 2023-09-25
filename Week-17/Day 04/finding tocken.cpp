/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/25         *
 *    Time: 11:18:08           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

vector<string> keyword{
    "int", "asm", "double", "new", "switch",
    "auto", "else", "operator", "template",
    "break", "enum",
    "case", "float", "public", "try",
    "char", "for", "register", "typedef",
    "class", "return", "union",
    "const", "goto", "short", "unsigned",
    "continue", "if", "signed",
    "default", "inline", "sizeof", "void",
    "delete", "static",
    "do", "long", "struct", "while"};
vector<string> op{
    "+", "-", "%", "=", "*", "/"};
vector<string> punc{
    "#", "$", "&", "(", ")", ",", ".", ":", ";", "<", ">", "?", "@", "^", "{", "|",
    "}"};
vector<string> identi{
    "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q",
    "r", "s", "t", "u", "v", "w", "x", "y", "z"};
vector<bool> visited(keyword.size());
void found_keyword(vector<string> &s)
{
    int n = s.size();
    vector<string> ans;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < keyword.size(); j++)
        {
            if (s[i] == keyword[j])
            {
                ans.push_back(keyword[j]);
                count++;
                visited[i] = true;
            }
        }
    }
    if (ans.size() > 0)
    {
        cout << "Found total Keywords: " << count << " \n";
        for (auto c : ans)
            cout << c << " ";
        cout << nl;
    }
}
void found_operator(vector<string> &s)
{
    int n = s.size();
    vector<string> ans;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < op.size(); j++)
        {
            if (s[i] == op[j])
            {
                ans.push_back(op[j]);
                count++;
                visited[i] = true;
            }
        }
    }
    if (ans.size() > 0)
    {
        cout << "Found total Operator: " << count << " \n";
        for (auto c : ans)
            cout << c << " ";
        cout << nl;
    }
}
void found_puncuator(vector<string> &s)
{
    int n = s.size();
    vector<string> ans;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < punc.size(); j++)
        {
            if (s[i] == punc[j])
            {
                ans.push_back(punc[j]);
                count++;
                visited[i] = true;
            }
        }
    }
    if (ans.size() > 0)
    {
        cout << "Found total Puncuator: " << count << " \n";
        for (auto c : ans)
            cout << c << " ";
        cout << nl;
    }
}
void found_valid(vector<string> &s)
{
    int n = s.size();
    vector<string> ans;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < identi.size(); j++)
        {
            if (s[i] == identi[j])
            {
                ans.push_back(identi[j]);
                count++;
                visited[i] = true;
            }
        }
    }
    if (ans.size() > 0)
    {
        cout << "Found total valid: " << count << " \n";
        for (auto c : ans)
            cout << c << " ";
        cout << nl;
    }
}
void found_invalid(vector<string> &s)
{
    int n = s.size();
    set<string> ans;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if ((s[i] == identi[j]) or (s[i] == punc[j]) or (s[i] == keyword[j]) or (s[i] == op[j]))
            {
                continue;
            }
            else
            {
                count++;
                ans.insert(s[i]);
            }
        }
    }
    if (ans.size() > 0)
    {
        cout << "Found total invalid: " << count << " \n";
        for (auto c : ans)
            cout << c << " ";
        cout << nl;
    }
}
void solve()
{
    string s = "( ; for int do a = b + 2c ";
    vector<string> vec, ans;
    stringstream ss(s);
    string word;

    while (getline(ss, word, ' '))
    {
        vec.push_back(word);
    }
    // for (auto w : vec)
    //     cout << w << " ";
    found_keyword(vec);
    found_operator(vec);
    found_puncuator(vec);
    found_valid(vec);
    // found_invalid(vec);
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