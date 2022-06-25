"""
2022-03-28 18:25:59
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1720 KB
Accepted | 1 * (4 / 10) | 2 ms | 1632 KB

"""

#include<stdio.h>

int main()
{
    double sum=1,e=1;
    int n;
    scanf("%d",&n);
if(n>=18)
    printf("2.71828182845905");
else
{


    for(int i=1;i<=n;i++)
    {
        sum*=i;
        e+=1/sum;
    }

    printf("%.14f",e);
}
    return 0;
}