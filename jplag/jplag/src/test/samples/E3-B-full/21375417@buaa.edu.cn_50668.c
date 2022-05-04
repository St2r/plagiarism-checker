"""
2022-03-26 18:08:30
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 6 ms | 1556 KB
Accepted | 1 * (60 / 100) | 4 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0;i < n;i ++)
	{
		int x, sum;
		sum  = 0;
		scanf("%d", &x);
		for(int p = 1;p < x;p ++)
		{
			if(x % p == 0)
			{
				sum = sum + p;
			}
			else{
				sum = sum;
			}
		}
		if(sum == x)
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