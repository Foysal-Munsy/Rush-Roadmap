//
// Created by Foysal Munsy on 27 / 11 / 2023
// Time: 11 : 33 : 24
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

// given input grammar
map<string, vector<string>> grammar = {
    {"E", {"TE'"}},
    {"E'", {"+TE'", "#"}},
    {"T", {"FT'"}},
    {"T'", {"*FT'", "#"}},
    {"F", {"(E)", "id", "a", "b"}}};

vector<char> first(string symbol)
{
    vector<char> firstSet;
    if (grammar.find(symbol) == grammar.end())
    {
        firstSet.push_back(symbol[0]);
        // push symbol
    }
    else // otherwise production
    {
        for (auto &production : grammar[symbol])
        {
            if (grammar.find(string(1, production[0])) == grammar.end())
            {
                firstSet.push_back(production[0]);
            }
            else
            {
                vector<char> tempFirst = first(string(1, production[0]));
                firstSet.insert(firstSet.end(), tempFirst.begin(), tempFirst.end());
            }
        }
    }
    debug(grammar);
    HERE;
    return firstSet;
}

void solve()
{
    vector<string> order = {"E", "E'", "T", "T'", "F"}; // for the correct order
    for (auto &symbol : order)
    {
        vector<char> firstSet = first(symbol);
        cout << "First(" << symbol << ") = { ";
        for (int i = 0; i < firstSet.size(); i++)
        {
            cout << firstSet[i];
            if (i != firstSet.size() - 1)
            {
                cout << " , ";
            }
        }
        cout << "}\n";
    }
    debug(order);
    HERE;
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