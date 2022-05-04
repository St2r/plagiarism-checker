"""
2022-03-29 16:49:08
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include <stdio.h>
int main()
{
	int m,n,i,p,sum;
	scanf("%d",&m);
	for(p=1;p<=m;p++)
	{
		sum=0;
		scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==n)
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