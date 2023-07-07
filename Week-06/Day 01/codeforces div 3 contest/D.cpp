#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d, h;
        cin >> n >> d >> h;
        double area = 0;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            area += 0.5 * d * h;
        }
        cout << area << endl;
    }
    return 0;
}
