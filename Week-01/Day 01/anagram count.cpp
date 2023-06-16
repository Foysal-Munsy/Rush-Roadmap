//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        // code here
        int i=0,j=0;
        int fr1[26]={0},fr2[26]={0};
        for(char c: pat)
            fr1[c-'a']++;
        int ans=0,k=pat.size();
        while(j<txt.size())
        {
            fr2[txt[j]-'a']++;
            if(j<k-1)
                j++;
            else
            {
                bool flag =true;
                for(int v=0; v<26; v++)
                {
                    if(fr1[v] != fr2[v])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag)
                    ans++;
                fr2[txt[i]-'a']--;
                i++;
                j++;
            }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
