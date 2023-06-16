#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin >> n >> m;

    vector<int> arr (n);
    for(int i=0; i<n; i++) cin >> arr[i];

    vector<int> frq(m+1);
    for(int i=0; i<n; i++)
        frq[arr[i]]++;

    for(int i=1; i<=m; i++)
        cout << frq[i] <<endl;

    return 0;
}
