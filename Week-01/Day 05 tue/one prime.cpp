#include<iostream>
using namespace std;
int is_prime(int p)
{
    if(p==1)
        return 0;
    else if(p==2)
        return 1;
    for(int i=2; i<p; i++)
    {
        if(p%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;

    if(is_prime(n))
        cout <<"YES";
    else
        cout << "NO";


    return 0;
}
