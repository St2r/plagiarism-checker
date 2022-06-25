"""
2022-03-29 20:31:28
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 0 ms | 1716 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
long long n,i,k;
double pro=1,sum=1;
scanf("%lld",&n);
if(n>20)
n=20; 
for(int i=1;i<=n;i++)
{
	pro=1.0*i*pro;	
	sum=sum+1.0/pro;
}
printf("%.14lf",sum);
return 0;
}