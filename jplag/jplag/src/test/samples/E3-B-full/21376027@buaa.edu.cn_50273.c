"""
2022-03-26 09:53:11
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1632 KB
Accepted | 1 * (35 / 100) | 15 ms | 1636 KB
Accepted | 1 * (60 / 100) | 18 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	int n,i,x,j,k=0,a[101],sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		for(j=1;j<x;j++)
		{
			if(x%j==0)
			{
				a[k]=j;
				k++;
			}
		}
		for(j=0;j<=k-1;j++)
		{
			sum+=a[j];
		}
		if(sum==x)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		k=0;
		sum=0;
	}
	return 0;
}