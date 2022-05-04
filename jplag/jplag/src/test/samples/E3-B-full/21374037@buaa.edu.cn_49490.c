"""
2022-03-26 15:30:11
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1548 KB
Accepted | 1 * (35 / 100) | 6 ms | 1600 KB
Accepted | 1 * (60 / 100) | 10 ms | 1488 KB

"""

#include <stdio.h>
int main()
{
	int n,i,x,m,num;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		num=0;
		scanf("%d",&x);
		for(m=1;m<x;m++)
		{
			if(x%m==0)
			{
				num=num+m;
			}
		}
		if(num==x)
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