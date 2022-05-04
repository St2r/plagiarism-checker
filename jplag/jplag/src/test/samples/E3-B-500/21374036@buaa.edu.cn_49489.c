"""
2022-03-26 16:07:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1636 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 4 ms | 1640 KB

"""

#include <stdio.h>
int main()
{
	int n,m,h=1,i=1,r,sum=0;
	scanf("%d",&n);
	while(h<=n)
	{
		scanf("%d",&m);
		while(i<m)
		{
			r=m%i;
			if(r==0)
			{
				sum=sum+i;
			}
			i=i+1;
		}
		if(sum==m)
		{
		printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		sum=0;
		i=1;
		h=h+1;
	}
	return 0;
}