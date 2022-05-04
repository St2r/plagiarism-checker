"""
2022-03-27 14:23:31
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1652 KB
Accepted | 1 * (1 / 4) | 2 ms | 1640 KB
Accepted | 1 * (1 / 4) | 3 ms | 1612 KB
Accepted | 1 * (1 / 4) | 10 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,sum;
	int x[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d",&x[i]);
		for(j=1;j<x[i];j++)
		if(x[i]%j==0)
		{
			sum=sum+j;
		}
		if(x[i]==sum)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	return 0;
}