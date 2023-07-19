#include <iostream>
#include <unordered_map>
using namespace std;
#define     Code    ios_base::sync_with_stdio(false);
#define     By      cin.tie(nullptr);
#define     Foysal  cout.tie(NULL);
void solve()
{
    int N;
    cin >> N;
    unordered_map<int, bool> in;
    int max_people = 0;
    int curr_people = 0;
    for (int i = 0; i < N; i++)
    {
        int id;
        cin >> id;
        if (in[id])
        {
            in[id] = false;
            curr_people--;
        }
        else
        {
            in[id] = true;
            curr_people++;
        }
        max_people = max(max_people, curr_people);
    }
    cout << max_people << endl;
}
int main()
{
    // your code goes here
    Code By Foysal
    /*----------*/
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
