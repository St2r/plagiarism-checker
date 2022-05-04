"""
2022-03-26 12:40:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 2100 KB
Accepted | 1 * (35 / 100) | 3 ms | 2108 KB
Accepted | 1 * (60 / 100) | 3 ms | 2100 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n, a, sum;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        scanf("%d", &a);
        for (int j = 2; j < sqrt(a); j++)
            if (a % j == 0)
                sum += j + a / j;
        if (a == (int)sqrt(a) * (int)sqrt(a))
            sum += (int)sqrt(a);
        sum += 1;
        printf(a == sum ? "YES\n" : "NO\n");
    }
    return 0;
}