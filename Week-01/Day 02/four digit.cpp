#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    string convert = to_string(n);
    int size= convert.length();

    if(size==4)
        cout << n<<endl;
    else
        cout<< setfill('0') <<setw(4)<< n<<endl;


    return 0;
}
