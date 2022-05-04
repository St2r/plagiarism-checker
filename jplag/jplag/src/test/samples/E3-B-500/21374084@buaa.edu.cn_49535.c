"""
2022-03-27 23:56:28
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1604 KB
Accepted | 1 * (60 / 100) | 4 ms | 1536 KB

"""

#include <stdio.h>

int main()
{
	int n, x, i, j, sum;
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		sum = 0;
		scanf("%d", &x);
		for(j=1; j<x; j++)
		{
			if((x%j)==0)
			{
				sum+=j;
			}
		}

		if(sum == x)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	
	return 0;
}