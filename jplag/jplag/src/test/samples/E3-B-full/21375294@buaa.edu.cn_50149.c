"""
2022-03-26 08:34:33
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 10 ms | 1660 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n, x, i, j, a1, a2, sum;
	scanf("%d", &n);
	
	while(n--)
	{
		sum = 1;
		scanf("%d", &x);
		for(i = 2; i <= sqrt(x); i++)
		{
			if(x % i == 0)
			{
				if (i == sqrt(x)) sum += i;
				else sum += i + x / i;
			}
		}
		
		if(sum == x) printf("YES\n");
		else printf("NO\n");
	}
}