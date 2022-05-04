"""
2022-03-28 22:28:00
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 2 ms | 1736 KB

"""

#include <stdio.h>
int main()
{
	int n;
	int num;
	int i=0;
	int j=0;
	int count=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&num);
		for (j=1;j<=num/2;j++)
		{
			if (num % j == 0)
			{
				count+=j;
			}
		}
		if (count == num)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		count = 0;
	}
	return 0;
}