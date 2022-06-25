"""
2022-03-26 17:11:23
AC
1.0
Accepted | 1 * (1 / 4) | 12 ms | 1644 KB
Accepted | 1 * (1 / 4) | 2 ms | 1628 KB
Accepted | 1 * (1 / 4) | 11 ms | 1672 KB
Accepted | 1 * (1 / 4) | 12 ms | 1664 KB


"""

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define eps 1e-10

int main()
{
    int n,i,j,a[20];
    double sum=0,re=1.0;
    scanf("%d",&n);
    a[0]=1;
    if(n<=19)
    {
        while(n--)
        {
            a[n]=n+1;
            re=1;
            for(i=1;i<=a[n];i++)
            {
                re=re/(i*1.0);
            }
           sum+=re;
        }
      printf("%.14lf",sum+1.0);

    }
    else
    {
        n=19;
        while(n--)
        {
            a[n]=n+1;
            re=1;
            for(i=1;i<=a[n];i++)
            {
                re=re/(i*1.0);
            }
           sum+=re;
        }
       printf("%.14lf",sum+1.0);

    }
    return 0;
}