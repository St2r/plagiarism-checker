"""
2022-03-27 21:41:09
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1604 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 3 ms | 1712 KB

"""

#include <stdio.h>
int main()
{
 long long n;
 scanf("%lld",&n);
 double a=1,b,sum,c=2.71828182845905;
 if(n<=20)
 {
 for(long long i=1;i<=n;i++)
 {
     a=a*i;
     b=a;
     sum=sum+1/b;
 }
 printf("%.14f",sum+1);
 }
else
{
    printf("%.14f",c);
}
 return 0;
}