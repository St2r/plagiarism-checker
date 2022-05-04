"""
2022-03-28 10:24:13
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1712 KB
Accepted | 1 * (60 / 100) | 10 ms | 1660 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
	int n,x[105];
	scanf("%d",&n);
	int i,j,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<x[i];j++)
		{
			if(x[i]%j==0)
				sum+=j;
		}
		if(sum==x[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		j=1;
		sum=0;
	}
	return 0;
}