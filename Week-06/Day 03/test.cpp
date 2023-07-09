#include <bits/stdc++.h>
using namespace std;


int luckiness(long long x)
{
    int max_digit = 0, min_digit = 9;
    while (x > 0)
    {
        int digit = x % 10;                // get last digit
        max_digit = max(max_digit, digit); // update max digit
        min_digit = min(min_digit, digit); // update min digit
        x /= 10;                           // remove last digit
    }
    return max_digit - min_digit; 
}

long long find_luckiest(long long l, long long r)
{
    long long ans = l, max_luckiness = luckiness(l); // initialize the answer and the maximum luckiness
    for (long long x = l + 1; x <= r; x++)
    {                                     
        int cur_luckiness = luckiness(x); // compute the luckiness of the current number
        if (cur_luckiness > max_luckiness)
        {                                  // if it is greater than the max luckiness 
            ans = x;                       // update the answer
            max_luckiness = cur_luckiness; // update the maximum luckiness
        }
    }
    return ans; 
}

int main()
{
    int t;    
    cin >> t; 
    while (t--)
    {                                        
        long long l, r;                      
        cin >> l >> r;                     
        cout << find_luckiest(l, r) << endl;
    }
    return 0;
}
