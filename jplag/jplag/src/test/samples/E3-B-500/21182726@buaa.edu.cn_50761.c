"""
2022-03-29 23:20:17
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 2 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	int n, a[105], m, y[10000], i, k, h, j;
	scanf("%d",&n);
	m = 1;
	while (m <= n)
	{
		scanf("%d",&a[m]);
		m++;
	}
	m = 1;
	j = 1;
	k = 1;
	while (m < n)
	{
		j = 1;
		h = 0;
		k = 1;
		while (j < a[m])
		{
			i = a[m] % j;
			if (i == 0)
			{
				y[k] = j;
				k++;
			}
			j++;			
		}
		k = k - 1;
		while (k >= 1)
		{
			h = h + y[k];
			k--;
		}
		if (h == a[m])
			printf("YES\n");
		else
			printf("NO\n");
		m++;
		
	}
		j = 1;
		h = 0;
		k = 1;
		while (j < a[n])
		{
			i = a[n] % j;
			if (i == 0)
			{
				y[k] = j;
				k++;
			}
			j++;			
		}
		k = k - 1;
		while (k >= 1)
		{
			h = h + y[k];
			k--;
		}
		if (h == a[n])
			printf("YES");
		else
			printf("NO");
	return 0;	
}