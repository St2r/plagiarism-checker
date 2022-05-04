"""
2022-03-26 12:23:02
AC
1.0
Accepted | 1 * (5 / 100) | 4 ms | 1540 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 10 ms | 1692 KB
B

"""

#include <stdio.h>
int main()
{
	int n,i,j,k,sum=0;
	int a[100];
	scanf("%d\n",&n);
	
	for(k=0;k<n;k++)
	{
		scanf("%d",&a[k]);
	}
	for(i=0;i<n;i++)
	{
	for(j=1;j<a[i];j++)
	{
		if(a[i]%j==0)
		{
			sum=sum+j;
		}
	}
	if(sum==a[i])
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	sum=0;
	}	
	return 0;
}