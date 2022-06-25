"""
2022-03-26 21:55:44
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 16 ms | 1692 KB
Accepted | 1 * (1 / 4) | 6 ms | 1712 KB

"""

#include<stdio.h>

int main()
{
	int n,i=1,a=1,j=1;
	double b,ans=1;
	scanf("%d",&n);
	if(n>16)
	{
		n=16;
	}
	for(i=1;i<=n;i++)
	{
	        a=1;
		for(j=1;j<=i;j++)
		{
			a=a*j;
		}
		b=1/(1.0*a);
                ans=ans+b;	
	}
	printf("%.14f",ans);
	return 0;
}