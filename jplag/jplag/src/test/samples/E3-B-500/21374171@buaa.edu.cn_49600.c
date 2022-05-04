"""
2022-03-27 19:43:01
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1620 KB
Accepted | 1 * (1 / 4) | 3 ms | 1532 KB
Accepted | 1 * (1 / 4) | 2 ms | 1636 KB
Accepted | 1 * (1 / 4) | 3 ms | 1536 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n, a, sum;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		sum = 0;
		for (int j = 2; j < sqrt(a); j++)
		{
			if (a % j == 0)
				sum += j + a / j;
		}
		if ((int)sqrt(a) == sqrt(a))
			sum += sqrt(a);
		if (a == sum + 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}