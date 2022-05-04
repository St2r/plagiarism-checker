"""
2022-03-26 10:13:52
AC
1.0
Accepted | 1 * (1 / 3) | 15 ms | 1640 KB
Accepted | 1 * (1 / 3) | 18 ms | 1700 KB
Accepted | 1 * (1 / 3) | 585 ms | 1612 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,x,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		sum=0;
		for(j=1;j<x;j++)
			if(x%j==0)	sum+=j;
		if(sum==x)	printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}