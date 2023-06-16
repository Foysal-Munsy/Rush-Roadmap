#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lenOfLongSubarr(int a[],  int N, int k)
    {
        // Complete the function
        int sum =0, ans =0; // sum --> prefix sum
        unordered_map<int,int> mp;

        for(int j=0; j<N; j++)
        {
            sum += a[j]; // sum --> prefix sum
            if(sum == k) // ans found directly
            {
                ans = max(ans,j+1);
            }
            if(mp.find(sum-k) != mp.end()) // sum-k will found when not equal mp.end (end na hoile paoa jabe)
            {
                int i = mp[sum-k]; // found in i'th index
                ans = max(ans, j-i); // my index minus (sum-k) values->index
            }
            if(mp.find(sum) == mp.end()) // if sum is not available in hashmap (na thakle end return kore)
            {
                mp[sum] = j; // then I will update
            }
        }
        return ans;

    }

};



int main() {
	//code

	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];

	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;

	}

	return 0;
}
