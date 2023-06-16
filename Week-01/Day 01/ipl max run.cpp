//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        // your code here
        int i=0,j=0,mx= INT_MIN;
        vector <int> ans;
        while(j<n)
        {
            mx = max(mx,arr[j]);

            if(j<k-1)
            {

                j++;
            }
            else
            {
                ans.push_back(mx);
                arr[i]--;
                i++;
                j++;
            }
        }
        return ans;
    }
};
/*
1
9 3
1 2 3 1 4 5 2 3 6

*/

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends
