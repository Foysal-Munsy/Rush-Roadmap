#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void solve()
{
    int n;  cin >> n;
    string st;   cin >> st;
    unordered_map<char,int>mp;
    for(auto c:st) mp[c]++;
    
    int odd_count=0;
    for(auto i:mp)
    {
        if(i.second & 1) odd_count++;
    }

    if(odd_count>1) {cout << 0 << '\n';return;}
    if(mp.size() == 1 && (n & 1)) {cout << 2 << '\n';return;}
    else {cout << 1 << '\n';return;}
}
int main() {
	// your code goes here
    int t;  cin >> t;
    while(t--) solve();
	return 0;
}
