"""
2022-03-27 15:51:09
AC
1.0
Accepted | 1 * (1 / 100) | 2 ms | 1632 KB
Accepted | 1 * (39 / 100) | 2 ms | 1580 KB
Accepted | 1 * (60 / 100) | 3 ms | 1556 KB
B

"""

#include <stdio.h>
int main()
{
	int n,a[100];
	int i=1;
	int m=1,sum[100],k=1;
	scanf("%d",&n);
	while(i<=n)
	{
	scanf("%d",&a[i]);
	i++;}
   while(m<=n)
   { sum[m]=0;
   k=a[m]-1;
	 while(k>0)
    {
    if(a[m]%k==0)
    sum[m]=sum[m]+k;
    k--;
	}
m++;
}
m=1;
while(m<=n)
{
if(sum[m]==a[m])
printf("YES\n");
else
printf("NO\n") ;
m++;}
return 0;
}