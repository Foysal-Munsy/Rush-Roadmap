#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // Write C++ code here
    int t; cin >> t;

    while(t--)
    {
        int n; cin>> n;
        string s; cin >> s;

        int sum = n;
        set<char> unq;
        for(int i=0; i<n; i++)
        {
            unq.insert(s[i]);
            //cout << s[i] << " " << unq.size()<<" ";
        }
        sum += unq.size();
        cout << sum << endl;
    }

    return 0;
}
