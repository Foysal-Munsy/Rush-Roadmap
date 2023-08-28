/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

// To check if array is sorted or not
bool isSorted(int a[], int n)
{
    while (--n > 0)
        if (a[n] < a[n - 1])
            return false;
    return true;
}

// To generate permutation of the array
void shuffle(int a[], int n)
{
    for (int i = 0; i < n; i++)
        swap(a[i], a[rand() % n]);
}

// Sorts array a[0..n-1] using Bogo sort
void bogosort(int a[], int n)
{
    // if array is not sorted then shuffle
    // the array again
    while (!isSorted(a, n))
        shuffle(a, n);
}
void solve()
{
    int n;
    cin >> n;

    int a[n];
    for (int &i : a)
        cin >> i;
    // cout << sum / 2 << nl;
    // bogosort(a, n);
    sort(a, a + n);
    int sum = 0, mysum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        mysum += a[i];
        sum -= a[i];
        if (mysum > sum)
        {
            cout << i + 1 << nl;
            break;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}