"""
2022-03-26 10:02:28
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1640 KB
Accepted | 1 * (35 / 100) | 12 ms | 1652 KB
Accepted | 1 * (60 / 100) | 18 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,k,s,x;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		scanf("%d",&x);
		if(x==1)
		{
			printf("NO\n");
		}
		else
		{
		
			s=0;
			for(i=1;i<=x-1;i++)
			{
				if(x%i==0)
				{
					s+=i;
				}
			}
			if(s==x)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
	}
	return 0;
}