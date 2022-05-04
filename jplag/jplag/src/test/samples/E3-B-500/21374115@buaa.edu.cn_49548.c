"""
2022-03-26 08:09:47
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1704 KB

"""

#include <stdio.h>

int check(int in)
{
	int sum = 0;
	for (int i = 1; i<in ;i++)
	{
		if (in%i == 0)
		{
			sum += i;
		}
	}
	
	if (sum == in)
	{
		return 1;
	}
	
	return 0;
}


int main()
{
	int n;
	scanf("%d",&n);
	int a;
	for (int i = 0; i<n ;i++)
	{
		scanf("%d",&a);
		if (check(a) == 1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}