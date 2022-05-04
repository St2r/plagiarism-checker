"""
2022-03-29 20:51:04
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1676 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 2 ms | 1656 KB

"""

#include <stdio.h>

int main()
{
	int n,i,k;
	int a[110];
	int x;
	scanf("%d",&n);
	i=0;
	k=1;
	x=0;
	while(i<n)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=0;
	while(i<n)
	{
		k=1;
		x=0;
		while(k<a[i])
		{
			if(a[i]%k==0)
			{
				x=x+k;
				k=k+1;
			}
			else
			{
				k=k+1;
			}
		}
		if(x==a[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		
		i=i+1;
	}
	return 0;
}