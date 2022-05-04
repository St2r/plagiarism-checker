"""
2022-03-26 23:49:42
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 2 ms | 1556 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include<math.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int n, a[1001]; scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		for(int j=1;j<=(a[i]/2);j++)
		{
			if (a[i] % j == 0)sum += j;
		}
		if(sum==a[i])
			printf("YES\n");
		else
			printf("NO\n");
		}
	return 0;
}