"""
2022-03-27 09:14:43
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 3 ms | 1616 KB
Accepted | 1 * (60 / 100) | 3 ms | 1616 KB

"""

#include<stdio.h>

int main()
{
	int n,i=1,j,sum[150];
	int a[150];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum[i]=0;
		scanf("%d",&a[i]);
		for(j=1;j<=a[i]/2;j++)
		{
			if(a[i]%j==0)
			{
				sum[i]=sum[i]+j;
			}
		}
		
	}
	for(i=1;i<=n;i++)
	{
		if(sum[i]==a[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	
	return 0;
 }