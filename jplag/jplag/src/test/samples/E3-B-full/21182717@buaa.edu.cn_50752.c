"""
2022-03-27 21:33:54
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1676 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int i,j,n,x,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		for(j=1;j<x;j++)
		{
			if(x%j==0)sum+=j;
		}
		if(sum==x&&x!=1)printf("YES\n");
		else printf("NO\n");
		sum=0;
	}
}