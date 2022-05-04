"""
2022-03-27 14:52:08
AC
1.0
Accepted | 1.0 * (3 / 15) | 2 ms | 1660 KB
Accepted | 1.0 * (2 / 15) | 2 ms | 1664 KB
Accepted | 1.0 * (4 / 15) | 2 ms | 1616 KB
Accepted | 1.0 * (1 / 15) | 3 ms | 1660 KB
Accepted | 1.0 * (5 / 15) | 2 ms | 1624 KB

"""

#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	int n, x, sum;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		sum = 0;
		scanf("%d", &x);
		for(int j=1;j<x;j++)
		{
			if(x%j==0)
			{
				sum+=j;
			}
		}
		if(sum==x)
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