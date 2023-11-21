//
// Created by Foysal Munsy on 20 / 11 / 2023
// Time: 13 : 25 : 58
//
#include <bits/stdc++.h>
using namespace std;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

void solve()
{
    string reg;
    cin >> reg;
    cout << "Given regular expression: " << reg << "\n";
    vector<vector<vector<int>>> q = {
        {{1}, {0}}, // q0
        {{1}, {2}}, // q1
        {{1}, {3}}, // q2
        {{1}, {3}}  // q3
    };

    cout << "\n\tDfa Transition Table \n";
    cout << "__________________________________________\n";
    cout << "Current State |\tInput'a'|\tInput 'b'";
    cout << "\n__________________________________________\n";
    for (int i = 0; i < q.size(); i++)
    {
        cout << "\n  ";
        if (i == 0)
            cout << "->";
        if (i == 3)
            cout << "*";
        cout << "q" << i << "\t     |   ";
        if (!q[i][0].empty())
        {
            for (int state : q[i][0])
                cout << "q" << state << " ";
        }
        else
        {
            cout << "-";
        }
        cout << "\t|\t";
        if (!q[i][1].empty())
        {
            for (int state : q[i][1])
                cout << "q" << state << " ";
        }
        else
        {
            cout << "-";
        }
    }
    cout << "\n__________________________________________\n";
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