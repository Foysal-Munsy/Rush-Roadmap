
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    string s;
    cin >> s;
    int over = 0, ball = 0, run = 0, wkt = 0;
    over = s.size() / 6;
    ball = s.size() % 6;
    string ovr = to_string(over);
    ovr += '.';
    ovr += to_string(ball);
    double OVER = 1.0;
    OVER = stod(ovr);
    vector<int> v;
    for (auto c : s)
    {
        if (c != 'W')
            run += (c - 48);
    }

    for (auto c : s)
    {
        if (c == 'W')
            wkt++;
    }
    string r = "Run", w = "Wicket", o = "Over";
    if (OVER > 1)
    {
        o += 's';
    }
    if (run > 1)
    {
        r += 's';
    }
    if (wkt > 1)
        w += 's';

    cout << fixed << setprecision(1) << OVER << " " << o << " " << run << " " << r << " " << wkt << " " << w << "." << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

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