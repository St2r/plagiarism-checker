"""
2022-03-26 10:42:59
AC
1.0
Accepted | 1 * (1 / 4) | 9 ms | 1620 KB
Accepted | 1 * (1 / 4) | 3 ms | 1644 KB
Accepted | 1 * (1 / 4) | 2 ms | 1644 KB
Accepted | 1 * (1 / 4) | 6 ms | 1596 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);	
	int x[101]={0},sum[101]={0};
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
		for(int j=1;j<x[i];j++)
		{
			if(x[i]%j==0)
			sum[i]=sum[i]+j;
		}
	}
	for(int k=1;k<=n;k++)
		if(x[k]==sum[k])
		printf("YES\n");
		else
		printf("NO\n");
	return 0;
}