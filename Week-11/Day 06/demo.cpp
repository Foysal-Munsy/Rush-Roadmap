#include<bits/stdc++.h>
using namespace std;
int main()
{
    //cout << "HELLO\n";
    vector<long long> v;
    for(int i=0; i<5; i++)
    {
        int x;  cin >> x;
        v.push_back(x);
    }
     
    for(int i=0;i<5; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}