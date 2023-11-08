//
// Created by Foysal Munsy on 06 / 11 / 2023
// Time: 11 : 30 : 30
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

bool isNumber(string s)
{
    for (char &c : s)
    {
        if (isdigit(c) == 0)
            return false;
    }
    return true;
}
bool isLowerCase(string s)
{
    for (char &c : s)
    {
        if (islower(c) == 0)
            return false;
    }
    return true;
}
bool isUpperrCase(string s)
{
    for (char &c : s)
    {
        if (isupper(c) == 0)
            return false;
    }
    return true;
}
void Rule_1(string s)
{
    if (isNumber(s))
    {
        cout << "Contains only digits\n";
    }
    else if (isLowerCase(s))
    {
        cout << "Contains lowercase letters\n";
    }
}
void Rule_2(string s)
{
    if (isNumber(s))
    {
        cout << "Contains only digits\n";
    }
    else if (isLowerCase(s))
    {
        cout << "Contains lowercase letters\n";
    }
    else if (isUpperrCase(s))
    {
        cout << "Contains uppercase letters\n";
    }
}

void solve()
{
flag:
    cout << "Set Rule:\n";
    string rule;
    cin >> rule; // # for rule_1, ## for rule_2 and 0 for end
    if (rule == "#")
    {
        // rule 1
        string s;
        while (cout << "Write for #:\n", cin >> s)
        {

            if (isNumber(s) or isLowerCase(s))
                Rule_1(s);
            else
            {
                cout << "No action executed under #\n";
                goto flag;
            }
        }
    }
    else if (rule == "##")
    {
        string s;
        while (cout << "Write for ##:\n", cin >> s)
        {

            if (isNumber(s) or isLowerCase(s) or isUpperrCase(s))
                Rule_2(s);
            else
            {
                cout << "No action executed under ##\n";
                goto flag;
            }
        }
    }
    else // rule == "0"
    {
        cout << "Program ends!\n";
        return;
    }
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif

    solve();

    return 0;
}