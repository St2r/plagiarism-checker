"""
2022-03-27 11:12:09
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1652 KB
Accepted | 1 * (35 / 100) | 3 ms | 1628 KB
Accepted | 1 * (60 / 100) | 4 ms | 1552 KB

"""

#include <stdio.h>

int main()
{
	int n;
	int x[200];
	int sum=0;
	scanf("%d",&n);
	for(int i=0;i < n;i++)
	{
		scanf("%d",&x[i]);
		sum = 0;
		for(int k=1;k < x[i];k++)
		{
			if(0 == x[i] % k)
			{
				sum = sum + k;
			}
		}
		if(sum == x[i])
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