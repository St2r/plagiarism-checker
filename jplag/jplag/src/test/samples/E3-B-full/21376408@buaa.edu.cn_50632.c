"""
2022-03-26 16:28:24
AC
1.0
Accepted | 1 * (5 / 100) | 15 ms | 2004 KB
Accepted | 1 * (35 / 100) | 19 ms | 2044 KB
Accepted | 1 * (60 / 100) | 26 ms | 2040 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i, j,  l;
	for (i = 0; i < n; i++)
	{
		int k = 0;
		int a, c=0;
		int b[100000]={0};
		scanf("%d", &a);
		for (j = 2; j < a; j++)
		{
			if (a % j == 0)
			{
				b[k] = j;
				k ++;
			}
		}
		for (l = 0; l <= k; l++)
			c += b[l];
		if ((c+1) == a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}