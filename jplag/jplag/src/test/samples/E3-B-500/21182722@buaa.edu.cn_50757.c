"""
2022-03-29 16:48:31
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 0 ms | 1696 KB
Accepted | 1 * (60 / 100) | 3 ms | 1592 KB

"""

#include <stdio.h>
int main()
{
	int n, a[101], m, y[10001], i, k, h, j;
	scanf("%d",&n);
	for(m=1; m <= n; m++)
	{
		scanf("%d",&a[m]);
	}
	j = 1;
	k = 1;
	for(m=1; m <= n; m++)
	{
		h = 0;
		k = 1;
		for(j=1; j < a[m]; j++)
		{
			i = a[m] % j;
			if (i == 0)
			{
				y[k] = j;
				k++;
			}
		}
		for(k=k - 1; k >= 1; k--)
		{
			h = h + y[k];
		}
		if (h == a[m])
			{
			if (m < n)
				printf("YES\n");
			else
				printf("YES");
			}
		else
			{
			if (m < n)
				printf("NO\n");
			else
				printf("NO");
			}
	}
	return 0;	
}