"""
2022-03-26 14:52:25
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB

"""

#include<stdio.h>

int main()
{
 long long n;
 double x=1,sum=1,i;
 scanf("%lld",&n);
 if(n>40)
 printf("2.71828182845905");
 else
 {
 for( i = 1; i<=n;i++)
 {
     x=x*i;
     sum=sum+1/x;
 }
 printf("%.14f",sum);
 }
 return 0;
}