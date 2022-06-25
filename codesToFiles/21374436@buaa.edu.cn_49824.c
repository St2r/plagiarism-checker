"""
2022-03-29 21:03:34
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (4 / 10) | 0 ms | 1728 KB

"""

#include<stdio.h>
int main()
{
 long long n,i,k=1;
 double ans=1.0;
 scanf("%lld",&n);
 if(n>=45)
 {
 	n=45;
 }
for(i=1;i<=n;i++)
 { 
 	k=k*i;
 	ans=ans+1.0/k;
 }
 printf("%.14lf",ans);

 return 0;
}