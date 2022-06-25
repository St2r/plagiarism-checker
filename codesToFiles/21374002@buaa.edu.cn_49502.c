"""
2022-03-28 23:26:26
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (4 / 10) | 0 ms | 1664 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;
    double a;
    double b=1;
    double sum=1;
    scanf("%d",&n);
    if(n<=20)
    {
        for(int i=1;i<=n;i++)
        {
            for(int v=1;v<=i;v++)
            {
                b=b*v;
                if(v==i)
                    {
                        a=(double)1/b;
                        sum=sum+a;
                        b=1;
                    }
            }
        }
     }
     if(n>20)
    {
        for(int i=1;i<=20;i++)
        {
            for(int v=1;v<=i;v++)
            {
                b=b*v;
                if(v==i)
                    {
                        a=(double)1/b;
                        sum=sum+a;
                        b=1;
                    }

            }

        }
     }
    printf("%.14lf",sum);
    return 0;
}