"""
2022-03-26 09:03:37
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1664 KB
Accepted | 1 * (35 / 100) | 11 ms | 1560 KB
Accepted | 1 * (60 / 100) | 23 ms | 1712 KB

"""

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[100];
	int k ;
	for (int i = 1; i <= n; i++)
		
	{
		int sum = 0;
		scanf("%d", &a[i]);
		int b;
		b= a[i];
		for (int i = 1; i < b; i++)
		{
			k = i;
			if (b%k == 0)
			{
				sum = sum + k;
			}
		}

		if (sum == b)
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