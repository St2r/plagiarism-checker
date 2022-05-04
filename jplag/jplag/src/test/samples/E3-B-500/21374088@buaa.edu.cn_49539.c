"""
2022-03-29 22:38:00
PE
0.0
Presentation Error | 0 * (5 / 100) | 1 ms | 1580 KB
Presentation Error | 0 * (35 / 100) | 1 ms | 1656 KB
Presentation Error | 0 * (60 / 100) | 1 ms | 1660 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n;
	int sum = 0;
	int a;
	scanf("%d", &a);
	for (int j = 0; j < a; j++)
	{
		scanf("%d", &n);
		for (int i = 1; i <= (n / 2); i++)
		{
			if (n % i == 0)
			{
				sum += i;
			}
		}
		if (n == sum)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
		sum = 0;
	}
	return 0; 
}