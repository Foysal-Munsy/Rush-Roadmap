#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    auto MIN = min_element(arr.begin(),arr.end());
    map<int,int> frq;
    for(int i :arr)
        frq[i]++;
    int ans = frq[*MIN];
    if(ans%2==0)
        cout << "Unlucky" <<endl;
    else
        cout << "Lucky" <<endl;
    return 0;
}
