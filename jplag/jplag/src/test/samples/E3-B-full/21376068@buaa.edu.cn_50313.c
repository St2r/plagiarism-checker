"""
2022-03-27 16:47:42
AC
1.0
Accepted | 1 * (5 / 100) | 8 ms | 1532 KB
Accepted | 1 * (35 / 100) | 3 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1476 KB

"""

#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	int x,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		for(int j=1;j<x;j++)
		{
			if(x%j==0)
			{
				sum+=j;
			}
		}
		if(sum==x)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		sum=0;
	}
	return 0;
}