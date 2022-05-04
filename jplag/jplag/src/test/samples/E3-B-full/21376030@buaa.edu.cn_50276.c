"""
2022-03-29 21:29:14
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1648 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 2 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
    int n, a, sum;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &a);
        sum=1;
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                sum+=i;
            }
        }
        if(sum==a)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}