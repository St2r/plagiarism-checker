"""
2022-03-27 15:50:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 3 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1548 KB

"""

#include<stdio.h>
int main ()
{    
	int n;
	int x,i;
	int sum=0;
	scanf("%d", &n);
	while (n--)
	{    
		sum = 0;
		scanf("%d", &x);
		for (i = 1; i < x/2+1; i++)
		{
			if (x % i == 0)
			{
				sum += i;
			}
		}
		if (sum == x)
			printf("YES\n");
		else 
			printf("NO\n");
	}
	 return 0;
}