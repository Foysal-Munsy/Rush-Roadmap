#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Write C++ code here
    int t;
    cin >> t;

    int n;
    string s;
    while(t--)
    {
        cin >> n;
        cin>> s;
        string ans;
        for(int i=1,j=0; i< s.size(); i++)
        {
//            for(int j=0; j<s.size(); j++)
//            {
                if(s[i]==s[j])
                {
                   ans +=s[j];
                   j=i+1;
                   i++;
                }
//            }
        }
        cout << ans << endl;
    }

    return 0;
}
