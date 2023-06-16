#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Write C++ code here
    int n;
    cin >> n;

    string s = to_string(n);
    if(s[0]=='0')
    {
        int i=0;
        while(s[i]=='0')
        {
            i++;
        }
        s.erase(0,i);
        cout << s << endl;
        cout << "NO" << endl;
        return 0;
    }

    string c = s;
    reverse(c.begin(), c.end());


    if(s==c)
    {

        cout << c << endl;
        cout << "YES" << endl;
    }
    else if(c[0]=='0')
    {
        int i=0;
        while(c[i]=='0')
        {
            i++;
        }
        c.erase(0,i);

        cout << c << endl;
        cout << "NO" << endl;
    }
    else
    {
        cout << c << endl;
        cout << "NO" << endl;
    }


    return 0;
}

