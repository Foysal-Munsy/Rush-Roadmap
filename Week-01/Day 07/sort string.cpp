#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;


    int frq[26] = {0};
    for(int i=0; i<n; i++)
    {
        char s;
        cin >> s;
        frq[s-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        while(frq[i]--)
        {
            char ans = (char)(i+'a');
            cout << ans;
        }
    }
    cout << endl;

    return 0;
}

