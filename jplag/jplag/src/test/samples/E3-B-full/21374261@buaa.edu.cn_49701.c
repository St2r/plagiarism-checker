"""
2022-03-26 09:11:47
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1664 KB
Accepted | 1 * (35 / 100) | 15 ms | 1720 KB
Accepted | 1 * (60 / 100) | 23 ms | 1656 KB

"""

#include<stdio.h>
int main(void)
{
	int n, x, i, j, k, fac;
	scanf("%d",&n);
	
	for (i = 0; i < n ; i++)
	{
		fac = 0;
		scanf("%d", &x);
		for (j = 1; j < x; j++)
		{
			if (x % j == 0)
			{
				fac += j;
			}
		}
		if (fac == x)
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