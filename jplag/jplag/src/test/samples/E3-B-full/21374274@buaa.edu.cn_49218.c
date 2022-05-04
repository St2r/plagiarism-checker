"""
2022-03-26 15:38:56
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n,x[10005],i,j=1,s=0,y=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=1;j<=x[i]/2;j++)
		{
			if(x[i]%j==0)
			{
				s=s+j;
				
			}		
		}
		if(s==x[i])
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