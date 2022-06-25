"""
2022-03-29 19:28:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1696 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double ans=1,jc=1;
	scanf("%d",&n);
	if(n<=17)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{			
				jc*=j;
			}
			ans=ans+1.0/(jc);	
			jc=1;
		}
	}
	else
		ans=2.71828182845905;
	printf("%.14f",ans);
	return 0;
}