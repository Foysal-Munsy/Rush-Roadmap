#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=false;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                if(s[i+1]==s[n-i-1] || s[i]==s[n-i-2]){
                    flag=true;
                    break;
                }
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
