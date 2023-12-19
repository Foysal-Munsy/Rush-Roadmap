#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool isValid(int x, int y)
{
    return x >= 0 && x < 3 && y >= 0 && y < 3;
}

int main()
{
    vector<string> grid(3);
    for (int i = 0; i < 3; ++i)
    {
        cin >> grid[i];
    }

    string ans = "CCC";
    for (int r1 = 0; r1 < 3; ++r1)
    {
        for (int c1 = 0; c1 < 3; ++c1)
        {
            for (int dir1 = 0; dir1 < 8; ++dir1)
            {
                int r2 = r1 + dx[dir1];
                int c2 = c1 + dy[dir1];
                if (isValid(r2, c2))
                {
                    for (int dir2 = 0; dir2 < 8; ++dir2)
                    {
                        int r3 = r2 + dx[dir2];
                        int c3 = c2 + dy[dir2];
                        if (isValid(r3, c3) && !(r1 == r3 && c1 == c3))
                        {
                            string cur = "";
                            cur += grid[r1][c1];
                            cur += grid[r2][c2];
                            cur += grid[r3][c3];
                            ans = min(ans, cur);
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
