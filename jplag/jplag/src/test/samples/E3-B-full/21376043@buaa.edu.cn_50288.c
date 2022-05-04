"""
2022-03-29 22:55:19
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1580 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,a=0,b=0;
	scanf("%d",&n);
	int x[100];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
		for(j=1;j<x[i];j++)
		{
			if(x[i]%j==0)
			{
				a=a+j;
			}
		}
		if(a==x[i]) printf("YES\n");	
		else printf("NO\n");
		a=0;
	}
    return 0;
	
}