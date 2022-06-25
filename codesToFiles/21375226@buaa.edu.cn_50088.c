"""
2022-03-29 22:21:49
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 0 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1752 KB

"""

#include<stdio.h>
int main()
{
int i,n;
double k=1.0,j=1;
scanf("%d",&n);
if(n<=17)
n=n;
else
n=17;
for(i=1;i<=n;i++)
{
j=j*i;
k=k+1.0/j;
}
printf("%.14lf",k);
return 0;
}