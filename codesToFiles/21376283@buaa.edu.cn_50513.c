"""
2022-03-29 23:34:22
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include <stdio.h>
#include <stdlib.h>
long long f(int);
int main()
{
   int n;
   double sum=1.0;
   scanf("%d",&n);
   if (n>17)
   n=17;
     for (int i=1;i<=n;i++)
    {sum=sum+1.0/f(i);

     }
     printf("%.14f",sum);

    return 0;
}

long long f(int n)
{
 if(n<=1)
    return 1;
 return n*f(n-1);
}