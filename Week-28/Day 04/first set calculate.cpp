//
// Created by Foysal Munsy on 11 / 12 / 2023
// Time: 11 : 40 : 04
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

// given input grammar
map<string, vector<string>> grammar = {
    {"S", {"AaB"}},
    {"A", {"b", "e"}},
    {"B", {"c", "e"}}};

vector<char> first(string symbol)
{
    vector<char> firstSet;
    if (grammar.find(symbol) == grammar.end())
    {
        firstSet.push_back(symbol[0]);
    }
    else // otherwise production
    {
        for (auto &production : grammar[symbol])
        {
            int index = 0;
            do
            {
                if (grammar.find(string(1, production[index])) == grammar.end())
                {
                    firstSet.push_back(production[index]);
                    break;
                }
                else
                {
                    vector<char> tempFirst = first(string(1, production[index]));
                    for (auto &item : tempFirst)
                    {
                        if (item != 'e')
                        {
                            firstSet.push_back(item);
                        }
                    }
                    if (find(tempFirst.begin(), tempFirst.end(), 'e') == tempFirst.end())
                    {
                        break;
                    }
                    index++;
                }
            } while (index < production.size());
        }
    }
    return firstSet;
}

void solve()
{
    cout << "First set in the bellow (e means epsilon): " << nl << nl;
    vector<string> order = {"S", "A", "B"}; // for the correct order
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