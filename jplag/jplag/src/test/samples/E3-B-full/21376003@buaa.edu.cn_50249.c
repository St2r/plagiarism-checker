"""
2022-03-28 08:31:24
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1624 KB
Accepted | 1 * (60 / 100) | 10 ms | 1548 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
int x[100];
 int n,i,k,j;
 scanf("%d",&n);
for(int i=1;i<=n;i++)
{
	scanf("%d",&x[i]);
}
for(int k=1;k<=n;k++)
{
	int sum=0;
	for(int j=1;j<x[k];j++)
	{
	if (x[k] % j==0)
	sum=sum+j;
	}
	if (sum==x[k])
	printf("YES\n");
	else
	printf("NO\n");	
}
return 0;
}