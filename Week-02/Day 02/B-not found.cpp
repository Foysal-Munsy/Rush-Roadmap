#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
#define PI 3.14159265358979323846
#define _Start_cpp_from_here_ ios_base::sync_with_stdio(false);cin.tie(nullptr);
bool is_palindrome(int n)
{
    string str = to_string(n);

    for(int i=0,j=str.size()-1 ; i<=j ; i++,j--)
    {
        if(str[i]!=str[j])
            return false;
    }

    return true;
}
void solve()
{
    string s; cin >> s;
    int a[26]={0}; //array of size 26 and initialize all elements 0;
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-'a']++; //increment the count of the character  at index i
    }
    for(int i=0;i<26;i++) //iterates over all letters
    {
        if(a[i]==0) //checks if the count of the character at index i is 0.
        {
            cout<<(char)(i+'a')<<endl;
            /*
             (char)(i+'a') - This expression adds the ASCII value of ‘a’ to the index i
             and then converts the resulting integer to a character. For example,
             if i is 0, then this expression evaluates to ‘a’.
             If i is 1, then this expression evaluates to ‘b’, and so on.
              For example, if the count of ‘b’ is 0 in the input string “atcoderregularcontest”,
              then we will print ‘b’ as the answer using this line of code.
            */
            return ;
        }
    }
    cout<<"None"<<endl;
    return;
}
void test()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[0]+i)
        {
            cout<<char(s[0]+i)<<endl;
            return;
        }
    }
    cout<<"None"<<endl;
    return;
}
void test1()
{
    string s;
    cin >> s;
    map<char,int> frq;
    for(int i=0; i<s.size();i++)
    {
        frq[s[i]]++;
    }
    map <char,int> :: iterator it;
    for(it == frq.begin(); it != frq.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return;
}
int main()
{
    _Start_cpp_from_here_
    /*-----------------*/
//    ll t;
//    cin>>t;
//    while(t--)
//    {
        //solve();
        //test();
        test1();
//
//    }

    return 0;
}
