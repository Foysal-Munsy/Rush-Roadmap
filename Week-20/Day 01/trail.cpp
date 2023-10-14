#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    // int a[n];
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = n; i <= 0; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}