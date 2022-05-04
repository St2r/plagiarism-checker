"""
2022-03-26 19:10:46
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1688 KB
Accepted | 1 * (60 / 100) | 4 ms | 1556 KB

"""

#include <stdio.h>

int main()
{
	int n,a[105],i,j,k,num=0,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		scanf("%d",&a[i]);
		for(j=1;j<a[i];j++)
		{
			if((a[i]%j)==0)
			{
				sum+=j;
			}
		}
		if(sum==a[i])
		{
			printf("YES\n");
		}
		else
		printf("NO\n");
	}
	return 0;
}