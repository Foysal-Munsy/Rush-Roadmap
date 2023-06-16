#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        long  sub;
        int x=0;
        while(n>0)
        {
            if(n>=pow(k,x))
                n-=pow(k,x);

            else break;

            x++;
        }
        cout << x <<endl;
        if(x%2==0) cout<<"Tina"<<endl;

        else cout<<"Shivansh"<<endl;

    }


    return 0;
}
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    long long t;
//    cin >> t;
//    long long x=1;
//    while(t--)
//    {
//        long long n, k;
//        cin >> n >> k;
//        long  sub;
//        if(n==0)
//        {
//            cout << "Tina" <<endl;
//
//        }
//        if(pow(k,x)<=n)
//        {
//            sub= n-pow(k,x);
//            if(sub> 0)
//                cout << "Tina" <<endl;
//            else
//                cout << "Shivansh" <<endl;
//        }
//
//    }
//
//
//    return 0;
//}
