"""
2022-03-29 16:20:13
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include<stdio.h>
int main ()
{int i;
long long n;
double sum;
long long t; 
sum=1.0;
t=1;
scanf ("%lld",&n);
if (n<=33)
{
for (i=1;i<=n;i++)
{   t=t*i;
 sum=sum+1.0/t; 
}}
if (n>33)
{for (i=1;i<=33;i++)
{   t=t*i;
 sum=sum+1.0/t; 
}
}
printf ("%.14f",sum);
 return 0;  
}