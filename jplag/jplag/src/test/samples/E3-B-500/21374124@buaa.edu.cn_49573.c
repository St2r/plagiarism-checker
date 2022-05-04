"""
2022-03-28 23:43:10
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1668 KB
Accepted | 1 * (35 / 100) | 0 ms | 1664 KB
Accepted | 1 * (60 / 100) | 1 ms | 1668 KB

"""

#include <stdio.h>
int main()
{
	int n,x[105],sum[10000]={0};
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
		for(int j=1;j<=x[i]/2;j++)
		{
			if(x[i]%j==0)
			sum[i]+=j;
		}
		if(sum[i]==x[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}