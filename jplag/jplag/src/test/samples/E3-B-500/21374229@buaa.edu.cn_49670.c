"""
2022-03-29 11:28:51
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 2 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n,x,i,j,bi=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		bi=0;
		for(j=1;j<=x/2;j++)
		{
			if(x%j==0)
			{
				bi+=j;
			}
		}
		if(x==bi)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
 }