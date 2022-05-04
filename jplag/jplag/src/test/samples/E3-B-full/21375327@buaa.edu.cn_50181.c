"""
2022-03-27 23:15:14
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1604 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int n,x[10001],i,j,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		for(j=1,sum=0;j<x[i];j++)
		{
			if(x[i]%j==0)
			sum+=j;
		}
		if(x[i]==sum)
		  printf("YES\n");
		else
		  printf("NO\n");
	}
	return 0;
 }