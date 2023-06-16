///using sliding window [but window size has no limitation]
//this programme will allows only positive value, it cannot work for negative value
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    int i=0, j=0; long long sum = 0; // i-->left, j-->right;
    int ans = 0;
    while(j<n)
    {
        sum +=a[j]; //always add value with sum

        if(sum>k)
        {
            while(sum>k)
            {
                sum -=a[i]; // delete left value
                i++; // after deleting i will move to the next index
            }
        }
        if(sum == k)
        {
            ans = max(ans, j-i+1); // find maximum subarray
        }
        j++;
    }
    return ans;
}
