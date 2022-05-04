"""
2022-03-29 19:39:40
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1584 KB

"""

#include <stdio.h>
int main()
{
	int n,sum,x;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		for (int j=1;j<x;j++)
		{
			if (x%j==0)
			{
				sum=sum+j;
			}
		}
		if (sum==x)
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