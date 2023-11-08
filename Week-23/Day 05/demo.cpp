#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> a = {1, 4, 5, 7};
    std::vector<int> x = {4, 6, 8, 1};

    for (int i = 0; i < x.size(); i++)
    {
        // Find the highest value lower than x[i]
        auto lower = std::lower_bound(a.begin(), a.end(), x[i]);
        if (lower == a.begin())
        {
            std::cout << "X ";
        }
        else
        {
            std::cout << *(--lower) << " ";
        }

        // Find the lowest value higher than x[i]
        auto upper = std::upper_bound(a.begin(), a.end(), x[i]);
        if (upper == a.end())
        {
            std::cout << "X\n";
        }
        else
        {
            std::cout << *upper << "\n";
        }
    }

    return 0;
}
