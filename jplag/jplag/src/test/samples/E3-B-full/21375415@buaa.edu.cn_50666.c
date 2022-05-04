"""
2022-03-28 21:46:07
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1728 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 2 ms | 1576 KB

"""

#include<stdio.h>

int main()
{
	int i,j,s,n;
	int a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=0;
		scanf("%d",&a);
		for(j=1;j<=a/2;j++)
		{
			if(a%j==0)
			s=s+j;			
		}
		if(s==a)
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