#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findB(std::vector<int> &a)
{
    std::vector<int> b(a.size(), 0);
    for (int i = 0; i < a.size(); ++i)
    {
        if (i == 0 || b[i - 1] != i)
            b[i] = i;
        else
            b[i] = i + 1;
    }
    return b;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    std::vector<int> b = findB(a);
    for (auto i : b)
        std::cout << i << " ";
    std::cout << "Minimum value of b[n]: " << *min_element(b.begin(), b.end()) << std::endl;

    return 0;
}
