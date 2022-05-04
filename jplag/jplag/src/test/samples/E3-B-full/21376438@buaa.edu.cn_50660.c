"""
2022-03-28 22:19:32
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1676 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1664 KB

"""

#include <stdio.h>

int main()
{
	int n, i, sum, j, a[105];
	scanf("%d", &n);
	
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);	
	}
	for(i=0;i<=n-1;i++)
	{
		sum = 0;
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				sum +=j;
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
	}
	return 0;
}