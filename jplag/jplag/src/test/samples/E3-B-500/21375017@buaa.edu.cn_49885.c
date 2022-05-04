"""
2022-03-26 21:07:20
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1636 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int a[100];
	int i = 0,j=1,sum=0;
	scanf("%d", &n);
	while (i<n)
	{
		scanf("%d", &a[i]);
		i = i + 1;
	}
	i = 0;
	while (i < n)
	{
		while (j < a[i])
		{
			if (a[i] % j == 0)
			{
				sum = sum + j;
			}
			j = j + 1;
		}
		if (sum == a[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		j = 1, i = i + 1,sum=0;
		
	}
	

}