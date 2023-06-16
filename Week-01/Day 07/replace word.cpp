#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n = s.size();
    // int pos =0;
   // string a;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T')
        {
            i+=4;
            cout << " ";
            //a.push_back(' ');
        }
        else
            //a.push_back(a[i]);
            cout << s[i];
    }

    //cout << a << endl;
    return 0;
}
//void solve()
//{
//    string s;
//    cin >> s;
//    while (true)
//    {
//        if (s.find("EGYPT") != string::npos)
//        {
//            int idx = s.find("EGYPT");
//            s.replace(idx, 5, " ");
//        }
//        else
//            break;
//    }
//    cout << s << '\n';
//}
