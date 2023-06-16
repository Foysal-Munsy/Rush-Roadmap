#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int i=0;
    bool flag = false;
    while(i<=c/a)
    {
        if((c-i*a)%b==0)
            flag = true;
        i++;
    }
    if(flag)
        cout << "Yes" <<endl;
    else
        cout << "No" <<endl;

    return 0;
}
