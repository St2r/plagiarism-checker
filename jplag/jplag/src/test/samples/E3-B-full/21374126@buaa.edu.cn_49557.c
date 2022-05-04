"""
2022-03-27 14:59:27
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1564 KB
Accepted | 1 * (35 / 100) | 14 ms | 1632 KB
Accepted | 1 * (60 / 100) | 14 ms | 1484 KB

"""

#include<stdio.h>
int main()
{
	int n,a[5001]={0},i,j,x,sum=0;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%d",&x);
		sum=0;
		for(i=1;i<x;i++)
	{
	        if(x%i==0)
			{
				sum+=i;
			//	a[i]=i;
			}
	}
	/*
	sum=0;
	for(i=1;i<x;i++)
	{
		sum=sum+a[i];

	}
	*/
	if(sum==x)
	printf("YES\n");
	else
	printf("NO\n");
	}
	return 0;
}