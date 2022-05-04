"""
2022-03-28 23:22:50
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 2 ms | 1584 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,k=0;
	scanf("%d",&n);
	int a[n],sum[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum[i]=0;
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
				sum[i]=sum[i]+j;	
		}
		if(sum[i]==a[i])
			printf("YES\n");
		else
			printf("NO\n");		
	}
	return 0;
}