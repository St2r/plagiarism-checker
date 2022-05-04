"""
2022-03-26 13:32:33
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1608 KB
Accepted | 1 * (35 / 100) | 3 ms | 1660 KB
Accepted | 1 * (60 / 100) | 4 ms | 1556 KB

"""

#include <stdio.h>
int main()
{
	int n;
	int x;
	int i=0;
	scanf("%d",&n);
	int a[101]={0};
	while(i<n)
	{
		scanf("%d",&x);
		int j=1;
		int sum=0;
		while(j<x)
		{
			if(x%j==0)
			{
				sum+=j;
			}
			j++;
		}
			if(sum==x)
			{
				a[i]=1;
			}
			else {
				a[i]=0;
			}
		i++;	
	}
	i=0;
	while(i<n)
	{
		if(a[i]==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		i++;
	}
	
	return 0;
}