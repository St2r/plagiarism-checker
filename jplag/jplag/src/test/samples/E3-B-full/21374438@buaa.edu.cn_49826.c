"""
2022-03-26 18:49:37
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1556 KB
Accepted | 1 * (35 / 100) | 2 ms | 1540 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, i, j, x, num = 0;
	int a[101];
	scanf("%d", &n);		
	for (i = 0; i < n; i++)
	{
		num = 0;
		scanf("%d", &x);
		for (j = 1; j * j < x; j++)
		{
			
			if (x % j == 0)
			{if((j * j != x)&&(j!=1))
				num = num + j + (x / j);
			 if ((j * j == x) ||(j==1) )
				num = num + j ;			 
			}
		}
		if (num == x)
			printf("YES\n");
		else if (num != x)
			printf("NO\n");
	}
		
	return 0;
}