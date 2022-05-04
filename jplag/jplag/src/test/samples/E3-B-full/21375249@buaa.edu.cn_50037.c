"""
2022-03-28 13:27:01
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1676 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
	int n,x,i,j,sum;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&x);
		sum=0;
		for (j=1;j<x;j++)
		  if(x%j==0)  sum+=j;
		printf(sum==x ? "YES" : "NO");
		printf("\n");
	}
	return 0;
}