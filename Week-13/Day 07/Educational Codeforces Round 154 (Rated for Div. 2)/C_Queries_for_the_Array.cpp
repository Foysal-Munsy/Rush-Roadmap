/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

bool isSorted(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> v;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+')
            v.push_back(1);
        if (s[i] == '1')
        {
            if (is_sorted(v.begin(), v.end())) // ekhane sort thaka lagbe
            {
                continue;
            }
            else
            {
                v.pop_back();
                v.push_back(-1);
            }
        }
        if (s[i] == '-')
            v.pop_back();
        if (s[i] == '0') // ekhane sort thaka jabe na
        {
            if (!is_sorted(v.begin(), v.end()))
            {
                continue;
            }
            else
            {
                v.pop_back();
                v.push_back(1);
            }
        }
    }
    if (s[n - 1] == '0') // sort thaka jabe na
    {
        if (is_sorted(v.begin(), v.end()))
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
        return;
    }
    if (s[n - 1] == '1') // ekhane sort thaka lagbe
    {
        if (is_sorted(v.begin(), v.end()))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
        return;
    }
}
void solution()
{
    string S;
    cin >> S;
    int srt = 0, len = 0;
    int unsrt = 0;
    bool out = false;
    for (char c : S)
    {
        if (c == '+')
        {
            len++;
            if (len == 1)
                srt = 1;
        }
        else if (c == '-')
        {
            len--;
            if (srt > len)
                srt = len;
            if (unsrt > len)
                unsrt = 0;
        }
        else if (c == '1')
        {
            if (unsrt != 0)
            {
                out = true;
                break;
            }
            srt = len;
        }
        else
        {
            if (srt == len)
            {
                out = true;
                break;
            }
            if (unsrt == 0)
                unsrt = len;
        }
    }
    cout << (out ? "NO\n" : "YES\n");
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