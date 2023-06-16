#include<bits/stdc++.h>
using namespace std;

int main()
{

    int N,K;
    cin >> N >> K;;
    vector<int>Arr;
    for(int i=0; i<N; i++)
    {
        int x;
        cin>>x;
        Arr.push_back(x);
    }
    sort(Arr.begin(),Arr.end());
    reverse(Arr.begin(),Arr.end());
    long long i=0,j=0,sum=0;
    while(j<K)
    {
        if(Arr[i]<0)
            break;
        sum += Arr[i];
        i++;
        j++;
    }
    cout << sum <<endl;

    return 0;
}

