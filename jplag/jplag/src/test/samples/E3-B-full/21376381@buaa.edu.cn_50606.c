"""
2022-03-26 22:28:21
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int n,a[110],i;
	int sum=0,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
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