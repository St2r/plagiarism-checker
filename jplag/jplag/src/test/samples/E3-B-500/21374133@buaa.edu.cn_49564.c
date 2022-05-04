"""
2022-03-27 18:55:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
    int n;
    int input;
    int fact;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        sum = 0;
        scanf("%d", &input);
        for (fact = 1; fact <= (input / 2); fact++)
            if ((input % fact) == 0)
                sum = sum + fact;
        if (sum == input)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}