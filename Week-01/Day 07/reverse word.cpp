//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//
//    string s;
//    bool flag = false;
//    while(cin>>s)
//    {
//        reverse(s.begin(), s.end());
//        if(flag)
//            cout << " ";
//        flag = true;
//        cout << s;
//    }
//
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int start = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == ' ')
        {
            reverse(s.begin()+start, s.begin()+i);
            start = i+1;
        }
    }
    reverse(s.begin()+start, s.end());
    cout << s << endl;
    return 0;
}
