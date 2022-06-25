"""
2022-03-26 17:29:13
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1728 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include <stdio.h>
int main()
{
    int n;
    double i,j,sum=1,a;
    scanf("%d",&n);
   if(n>=17)
       n=17;
    else
        n=n;
    for(i=1;i<=n;i++)
    {
        a=1;
        for(j=1;j<=i;j++)
        {
            a=a*j;
        }
        sum=sum+1/a;
    }
    printf("%.14f",sum);
return 0;
}