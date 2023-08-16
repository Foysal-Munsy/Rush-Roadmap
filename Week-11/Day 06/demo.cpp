#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "HELLO\n";
    vector<long long> v;
    for(int i=0; i<5; i++)
    {
        int x;  cin >> x;
        v.push_back(x);
    }
    for(auto i:v) cout << i << " ";
    cout << endl;
    return 0;
}