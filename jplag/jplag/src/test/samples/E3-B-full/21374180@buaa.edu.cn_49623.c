"""
2022-03-28 22:50:06
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1580 KB
Accepted | 1 * (35 / 100) | 1 ms | 1744 KB
Accepted | 1 * (60 / 100) | 3 ms | 1672 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,k,x[10000],sum=0;

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&x[i]);

	for(j=1;j<=n;j++)
	{
		for(k=1;k<x[j];k++)
		{
			if(x[j]%k==0)
			sum=sum+k;
		}	
		if(sum==x[j])
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	return 0;
}