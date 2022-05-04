"""
2022-03-26 08:38:51
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1664 KB
Accepted | 1 * (35 / 100) | 13 ms | 1528 KB
Accepted | 1 * (60 / 100) | 20 ms | 1668 KB

"""

#include<stdio.h>
int main()
{
	int n,x[105],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int sum=0;
		scanf("%d",&x[i]);
		for(j=1;j<x[i];j++)
		{
			if(x[i]%j==0)
			{
				sum+=j;	
			}
		}
		if(sum==x[i])
		{
			printf("YES\n");
		}
		else
		printf("NO\n");
	}
	return 0;
}