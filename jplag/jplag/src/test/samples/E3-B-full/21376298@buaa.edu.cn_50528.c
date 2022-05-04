"""
2022-03-29 22:18:35
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1696 KB
Accepted | 1 * (35 / 100) | 1 ms | 1588 KB
Accepted | 1 * (60 / 100) | 3 ms | 1740 KB

"""

#include <stdio.h>

int main()
{
	int n,i,m,k,final;
	int x[10000];
	
	scanf("%d",&n);
	

	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(m=1;m<=n;m++)
	{
		final=0;
		for(k=1;k<x[m];k++)
		{
			if(x[m]%k==0)
			{
				final=final+k;
			}
		}
		if(final==x[m])
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