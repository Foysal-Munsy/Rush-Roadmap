#include <bits/stdc++.h>
using namespace std;

const int MODULO = 1e9 + 7;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            //cin>> x;
            cin >> a[i];
            //a.push_back(x);
        }

        int ans = 0;
        for (int sub_set = 0; sub_set < (1 << n); sub_set++)
        {
            vector<int> b;
            for (int i = 0; i < n; ++i)
            {
                if ((sub_set >> i) & 1)
                    continue;

                b.push_back(a[i]);
            }

            bool flag = true;
            for (int i = 0; i < b.size(); i++)
            {
                int sum = 0;
                for (int j = i; j < b.size(); j++)
                {
                    sum += b[j];
                    if (sum % 2 == 1)
                        flag = false;
                }
            }

            if (flag)
                ans++;
        }

        cout << ans % MODULO << endl;
    }


    return 0;
}
