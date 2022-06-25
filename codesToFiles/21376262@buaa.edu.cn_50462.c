"""
2022-03-29 23:46:10
WA
0.0
Wrong Answer | 0 * (1 / 10) | 0 ms | 1732 KB
Wrong Answer | 0 * (1 / 10) | 1 ms | 1756 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1740 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1660 KB
Wrong Answer | 0 * (4 / 10) | 1 ms | 1660 KB

"""

#include <stdio.h>
long long factorial(long long);

int main()
{
    long long n,i,x;
    scanf("%d",&n);

    double s,s1;
    for(x=1;x<=18;x++)
    {
        s1=s1+(1/factorial(x));
    }

    if(n>=18)
        printf ("%f.14",s1);
    else
        {
            for (i=1;i<=n;i++)
            {
              s=s+(1/factorial(i));
            }
            printf ("%f.14",s);
        }

    return 0;
 }

 long long factorial(long long x)
 {
     int j,t=1;
     for(j=1;j<=x;j++)
     {
         t *= j;
     }
     return t;
 }