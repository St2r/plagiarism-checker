"""
2022-03-29 23:27:38
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include<stdio.h>

int main()
{
	int n,x,i,j;
	(n>=1) &&(n<=100);(x>=1)&&(x<=10000);
	scanf("%d",&n);
	for( i=1;i<=n;i++)
	{
		scanf("%d",&x);
		int sum=0;
		for( j=1;j<x;j++)
		{
			if(x%j==0)
			{
				sum+=j;
			}
		}
		if(sum==x)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}