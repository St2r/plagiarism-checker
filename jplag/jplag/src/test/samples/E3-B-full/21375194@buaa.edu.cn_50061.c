"""
2022-03-27 00:08:30
AC
1.0
Accepted | 1 * (5 / 100) | 8 ms | 1664 KB
Accepted | 1 * (35 / 100) | 9 ms | 1660 KB
Accepted | 1 * (60 / 100) | 11 ms | 1552 KB

"""

#include<stdio.h>
int main()
{
	int n,x,j,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		sum=0;
		scanf("%d",&x);
		for(int j=1;j<x;j++)
		{
			if(x%j==0)
			{
				sum+=j;
			}
		}
		if(sum==x)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}