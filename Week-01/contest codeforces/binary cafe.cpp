#include<iostream>
using namespace std;
int T,n,k;
int main()
{
    cin>>T;
    while(T--)
    {
        cin>>n>>k;
        k = min(k,30);
        cout<<min(n+1,1<<k)<<endl;
    }
}
