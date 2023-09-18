#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
const int N = 3;

void count_char(string st)
{
    map<char, int> mp;
    for (auto ch : st)
    {
        if (ch != '\n')
            mp[ch]++;
    }
    int char_count = 0;
    for (auto i : mp)
    {
        char_count += i.second;
        cout << i.first << " " << i.second << nl;
    }
    cout << "Total char count: " << char_count << nl;
}

void total_word(string st)
{
    int count = 0;
    for (auto ch : st)
    {
        if (ch == ' ' or ch == '.')
            count++;
    }
    cout << "Total word: " << count << nl;
}
void count_line(string st)
{
    int count = 0;
    for (auto c : st)
    {
        if (c == '\n')
            count++;
        else
            continue;
    }
    cout << "Total Line: " << count << nl;
}
void solve()
{
    string st;
    st = "i love bangladesh.\ni am from bangladesh.\n";

    // count_char(st);
    // total_word(st);
    // count_line(st);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}