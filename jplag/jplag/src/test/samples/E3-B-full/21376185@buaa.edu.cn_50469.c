"""
2022-03-29 21:39:12
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1588 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1664 KB

"""

#include<stdio.h>
int main()
{
	int i,n,xi,x[100]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&xi);
		for(int i1=1;i1<xi;i1++)
		{
			if(xi%i1==0)
			{
				x[i]=x[i]+i1;
			}
		}
		if(x[i]==xi)
		{
		x[i]=1;
		}
		else
		{
        x[i]=0;
		}	
	}
	for(i=1;i<=n;i++)
	{
		if(x[i]==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}