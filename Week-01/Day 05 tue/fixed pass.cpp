#include<bits/stdc++.h>
using namespace std;

int main()
{
    string password;
    cin>> password;

    if (password == "1999")
    {
        flag_1:
        cout << "Correct" << endl;
    }
    else
    {
        flag_2:
        cout << "Wrong" << endl;

        cin>> password;
        if(password=="1999")
            goto flag_1;
        else
            goto flag_2;
    }

    return 0;
}
