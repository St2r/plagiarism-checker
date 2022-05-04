"""
2022-03-27 22:05:52
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 2 ms | 1604 KB
Accepted | 1 * (60 / 100) | 2 ms | 1616 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	int n = 0, judge = 0, num = 0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &num);
		for(int j=1;j<=num/2;j++)
		{
			if(num%j==0)
			{
				judge += j;
			}
		}
		if(judge==num)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		judge = 0;
	}
}