"""
2022-03-29 19:19:29
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1756 KB

"""

#include <stdio.h>
int main()
{
    double p,n,i,j,q,k;
     scanf("%lf",&n);
     if(n>20)
        printf("2.71828182845905");
     else {
            for(j=1.0;j<=n;j++)
            {
                double a=1.0;
     for(i=1.0;i<=j;i++)
        { a*=i;
     p=1/a;
      }
      q+=p;
       }
       k=q+1;
       printf("%.14f",k);
       }
       return 0;
       }