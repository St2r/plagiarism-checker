"""
2022-03-28 12:52:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include <stdio.h>
#include<math.h>
long long fun(int x);

long long fun(int x)
{
		if(x == 1 || x == 0)
		{
				return 1;
		}
		else
		{
				return x * fun(x - 1);
		}
}
int main()
{
		int  x;
		double count = 0;
		scanf("%d", &x);
		if(x < 19)
		{
			    int i = 0;
				for(;i <= x;i ++)
				{
						count += 1.0 * 1 / fun(i);
				}
				printf("%.14f", count);
		}
		else
		{
				printf("2.71828182845905");
		}
	return 0;
}