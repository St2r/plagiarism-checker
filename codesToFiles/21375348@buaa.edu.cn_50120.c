"""
2022-03-28 07:01:30
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1544 KB

"""

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=110)
    {printf("2.71828182845905");}
    else
    {
        double s=1.0;
        double b=1.0;
        for(int i=1;i<=n;i++)
        {
            b=1.0*b*i;
            s=s+1.0/b;
        }
    printf("%.14f",s);}
    return 0;
}