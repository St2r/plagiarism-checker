"""
2022-03-26 11:06:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1596 KB
Accepted | 1 * (4 / 10) | 2 ms | 1604 KB

"""

#include <stdio.h>
int main()
{
	int n,a[105],sum[105]={0},i,j;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		for (j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			sum[i]+=j;
		}
		if(sum[i]==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}