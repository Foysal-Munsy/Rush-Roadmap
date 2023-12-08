//
// Created by Foysal Munsy on 04 / 12 / 2023
// Time: 11 : 59 : 05
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

void solve()
{
    // step 1  begin & 2 read input
    string expression; // = "out = in1 + in2 + in3 - in4";
    getline(cin, expression);

    // step 3 --> each string read and count the total number of string(here id.size() is the count)
    istringstream iss(expression);
    vector<string> id;
    for (string s; iss >> s;)
        id.push_back(s);
    // debug(id);
    // step 4
    int t_no = 1;
    string st = "";
    cout << "Given Expression: " << expression << nl;

    cout << "---Three address code---" << nl;
    for (int i = 2; i < id.size(); i += 2)
    {
        if (t_no > 3)
            break;
        st = id[i] + id[i + 1] + id[i + 2];
        // debug(st);
        cout << "t" << t_no << " = " << st << nl;
        // step 5
        id[i + 2] = "t" + to_string(t_no);
        ++t_no;
    }
    // step 6-->final temporary value is replaced with the left operand value
    st.clear();
    --t_no;
    st = id[0] + ' ' + id[1] + " t" + to_string(t_no);
    cout << st << nl;
    st.clear();
    // step 7 end
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