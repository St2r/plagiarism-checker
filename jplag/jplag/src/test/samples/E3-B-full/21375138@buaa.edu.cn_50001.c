"""
2022-03-27 20:23:57
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1644 KB
Accepted | 1 * (35 / 100) | 6 ms | 1636 KB
Accepted | 1 * (60 / 100) | 3 ms | 1640 KB

"""

#include <stdio.h>

int main()
{
	int n, a[105], i, j;
	int b=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				b=b+j;
			}
		}
		if(b==a[i])
		{
			printf("YES\n");
			b=0;
		}
		else
		{
			printf("NO\n");
			b=0;
		}
	}
	
	return 0;
}