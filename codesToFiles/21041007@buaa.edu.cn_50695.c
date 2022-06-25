"""
2022-03-27 01:01:30
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1620 KB

"""

#include<stdio.h>

int main()
{
    int n,i;
    unsigned long long x=1;
    double s=1;

    scanf("%d",&n);

    if(n<17)
    {
        for(i=1;i<=n;i++)
        {
            x*=i;
            s+=1/(1.0*x);
        }

        printf("%.14f",s);
    }

    else 
    {
        printf("2.71828182845905");
    }

    return 0;
}