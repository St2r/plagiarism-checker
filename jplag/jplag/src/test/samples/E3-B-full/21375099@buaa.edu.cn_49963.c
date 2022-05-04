"""
2022-03-29 19:07:24
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1552 KB
Accepted | 1 * (60 / 100) | 4 ms | 1700 KB

"""

#include <stdio.h>
int main()
{
	int n,x=0,i,sum=0,a=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		for(a=1;a<x;a++)
		{if(x%a==0)
		{
			sum=sum+a;
		}else
		sum=sum; 
		}
		if(sum==x)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		sum=0;
	}
	return 0;
}