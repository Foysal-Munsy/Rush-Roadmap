/********************
*   -------------   *
*   Author:Foysal   *
*   -------------   *
********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
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
#define     nl '\n'
#define     PI 3.14159265358979323846
#define     f1(i,n)     for(int i=0;i<n;i++)
#define     f2(j,n)     for(int j=0;j<n;j++)
#define     in_range(i,x,y) for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y) for(int i=y;i>=x;i--)
#define     yes    cout<<"YES"<<nl;
#define     Yes    cout<<"Yes"<<nl;
#define     no     cout<<"NO"<<nl;
#define     No     cout<<"No"<<nl;
#define     cin_array(x,o,n) for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_array(x,o,n) for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<nl;
#define     Code    ios_base::sync_with_stdio(false);
#define     By      cin.tie(nullptr);
#define     Foysal  cout.tie(NULL);

bool isPalindrome(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

string findSmallest(int N, int K)
{
    string result = "";
    if (N <= K)
    {
        for (int i = 0; i < N; i++)
        {
            result += "1";
        }
        return result;
    }
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            result += "1";
        }
        else
        {
            for (char c = '0'; c <= '9'; c++)
            {
                result += c;
                bool palindrome = false;
                for (int j = K + 1; j <= i + 1; j++)
                {
                    string sub = result.substr(i - j + 1, j);
                    if (isPalindrome(sub))
                    {
                        palindrome = true;
                        break;
                    }
                }
                if (!palindrome)
                {
                    break;
                }
                else
                {
                    result.pop_back();
                }
            }
        }
    }
    return result;
}

ll dig_sum(string s)
{
    ll sum = 0;
    for (auto c : s)
    {
        sum += c - '0';
    }
    return sum;
}
void solve()
{

    ll n, k;
    cin >> n >> k;
    string st = findSmallest(n, k);
    ll sum = dig_sum(st);
    cout << sum << nl;
}
int main()
{
    Code By Foysal
    /*----------*/
    ll t;   cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
