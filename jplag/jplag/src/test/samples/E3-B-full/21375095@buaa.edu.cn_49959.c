"""
2022-03-28 19:37:23
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1668 KB
Accepted | 1 * (60 / 100) | 3 ms | 1748 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[200000],sum=0,i,cnt,x;
	while(n--)
	{
		cnt=1;
		sum=0;
		scanf("%d",&x);
		for(i=1; i<x; i++)
		{
			if(x%i==0)
			{
				a[cnt]=i;
				cnt++;
			}
		}
		for(i=1; i<=cnt-1; i++)
		{
			sum=sum+a[i];
		}
		if(sum==x)
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