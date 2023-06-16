#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Write C++ code here
    string s; cin >> s;

    string c = s;
    reverse(c.begin(), c.end());
    if(s==c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

