/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/21         *
 *    Time: 19:37:44           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int file, n, m;
    cin >> file >> n >> m;
    vector<int> A, B, C;
    int zero = 0, temp = 0;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (x == 0)
            zero++;
        temp = max(temp, x);
        A.push_back(x);
    }
    for (int i = 0, x; i < m; i++)
    {
        cin >> x;
        if (x == 0)
            file++;
        temp = max(temp, x);
        B.push_back(x);
    }
    if (temp > (zero + file))
    {
        cout << -1 << nl;
        return;
    }

    // A.push_back(400), B.push_back(400);
    int i = 0, j = 0, k = 0;
    while (i < n or j < m)
    {
        if (A[i] < file)
        {
            C.push_back(A[i]);
            i++;
            k++;
        }
        else if (A[i] > file or B[j] > file)
        {
            if (A[i] == 0)
            {
                C.push_back(A[i]);
                k++;
                i++;
            }
            if (B[j] == 0)
            {
                C.push_back(B[j]);
                k++;
                j++;
            }
        }
        else
        {
            C.push_back(B[j]);
            j++;
            k++;
        }
    }
    for (auto i : C)
        cout << i << " ";
    cout << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}