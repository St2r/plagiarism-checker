"""
2022-03-29 19:12:51
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 3 ms | 1580 KB

"""

#include <stdio.h>
int main()
{
	int n,a,i,h,s,ai;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		ai=a;s=0;
		for(h=2;h<a;h++)
	{
		if(a%h==0)
		{
			s+=h;
		}	
		}
		if(s==(ai-1))
		printf("YES\n");
		else
		printf("NO\n");
	}
	
	}