"""
2022-03-27 10:11:47
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1628 KB
Accepted | 1 * (60 / 100) | 13 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
	int n,x;

	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		int sum =0;
		for(int j=1;j<x;j++)
		{
			if(x%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}