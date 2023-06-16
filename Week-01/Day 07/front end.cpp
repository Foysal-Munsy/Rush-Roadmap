#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    ///using stl:
    /*
        vector<int> arr;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            arr.push_back(x);
        }
        while(!arr.empty())
        {
            cout << arr.front() << " ";
            arr.erase(arr.begin());

            if(!arr.empty())
            {
                cout << arr.back() << " ";
                arr.pop_back();
            }
        }
    */
    ///wihtout stl
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0, last= n-1;
    while(start <= last)
    {
        cout << arr[start] << " ";
        start++;

        if(start <= last)
        {
            cout << arr[last] << " ";
            last--;
        }
    }


    return 0;
}
////////////
