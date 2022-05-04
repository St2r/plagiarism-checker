"""
2022-03-27 13:35:53
AC
1.0
Accepted | 1 * (1 / 4) | 6 ms | 1552 KB
Accepted | 1 * (1 / 4) | 6 ms | 1568 KB
Accepted | 1 * (1 / 4) | 9 ms | 1604 KB
Accepted | 1 * (1 / 4) | 6 ms | 1704 KB


"""

#include<stdio.h>
int main()
{
	int n,x[100],i,j,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		sum=0;
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
			printf("NO\n");
	}
	return 0;
}