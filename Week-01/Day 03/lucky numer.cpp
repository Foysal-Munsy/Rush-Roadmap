#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    vector<int> lucky_ans;
    int flag =0;
    for (int i = a; i <= b; i++)
    {

        bool lucky = true;
        int n =i;
        while (n > 0)
        {
            int dgt = n % 10;
            if (dgt != 4 && dgt != 7)
            {
                lucky = false;
                break;
            }
            n /= 10;
        }
        if (lucky)
        {
            lucky_ans.push_back(i);
            flag =1;
        }

    }
    if (flag ==1)
    {
        for (int i : lucky_ans)
        {
            cout << i << " ";
        }
        return 0;
    }
    cout << -1 << endl;

    return 0;
}
