//
// Created by Foysal Munsy on 06 / 12 / 2023
// Time: 20 : 54 : 15
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;
bool isVowel(char c)
{
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool isConsonant(char c)
{
    return isalpha(c) && !isVowel(c);
}
void solve()
{
    string s;
    cin >> s;
    bool flag = true;
    string temp = "CODETOWN";
    for (int i = 0; i < 8; i++)
    {
        if (isVowel(temp[i]) && !isVowel(s[i]))
        {
            flag = false;
            break;
        }
        if (isConsonant(temp[i]) && !isConsonant(s[i]))
        {
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
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