"""
2022-03-29 19:44:14
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1624 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int num, i;
	scanf("%d",&num);
	for(i=1;i<=num; i++)
	{
		int n,m,x;
		scanf("%d", &x);
		m=0;
		for(n=1;n<x; n++)
		{
			if(x%n==0)
			{
				m=m+n;
			}
		}
		if(x==m)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}