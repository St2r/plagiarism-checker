"""
2022-03-29 18:55:07
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1572 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 1 ms | 1740 KB

"""

#include<stdio.h>
int main()
{
    int n, i, a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==6|a==28|a==496|a==8128)
        printf("YES\n");
        else
        printf("NO\n");
    }
return 0;
}