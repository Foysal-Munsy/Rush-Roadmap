#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>>arr(n, vector<int>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin >> arr[i][j];
    }

    int x;
    cin >> x;
    bool finding = false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)

        {
            if(arr[i][j]==x)
            {
                finding = true;
                break;
            }
        }
    }
    if(finding)
        cout << "will not take number" << endl;
    else
        cout << "will take number" << endl;


    return 0;
}
