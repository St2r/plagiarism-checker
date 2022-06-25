"""
2022-03-26 16:13:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1560 KB
Accepted | 1 * (2 / 10) | 6 ms | 1552 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1496 KB

"""

//2.71828 18284 5904
#include <stdio.h>

long long fun(int n);

long long fun(int n)
{
		if(n == 1 || n == 0)
		{
				return 1;
		}
		else
		{
				return n * fun(n - 1);
		}
}

int main()
{
		int  n;
		double count = 0;
		scanf("%d", &n);
		
		if(n < 19)
		{
				for(int i = 0;i <= n;i ++)
				{
						count += 1.0 * 1 / fun(i);
				}
				printf("%.14f", count);
		}
		else
		{
				printf("2.71828182845905");
		}
	
}