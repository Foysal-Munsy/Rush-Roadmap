#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int i=0,j=0,n=s.size(),ans=-1,unq=0;
    int freq[26]={0};
    while(j<n)
    {
        char c =s[j];
        if(freq[c-'a']==0) unq++; //when char found first time
        freq[c-'a']++; // count
        if(unq>k)
        {
            while(unq>k) //if unq greater then we should decrease or delete unq
            {
                char leftC = s[i];
                freq[leftC - 'a']--; //always remove left unq char
                if(freq[leftC-'a']==0) unq--;  // unq remove thats why --
                i++;
            }
        }
        if(unq == k)
        {
            ans = max(ans, j-i+1);
        }

        j++;

    }
    return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

