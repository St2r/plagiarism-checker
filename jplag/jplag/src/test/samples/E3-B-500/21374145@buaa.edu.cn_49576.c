"""
2022-03-26 23:24:01
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 4 ms | 1684 KB

"""

#include<stdio.h>

int main()
{
	int n,i,x,j,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		for(j=1;j<x;j++)
		{
		if(x%j==0)
		{
		s=s+j;
		}
		}
		if(s==x)
		printf("YES\n");
		else
		printf("NO\n");
		s=0;
	}
}