"""
2022-03-26 17:24:59
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1556 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,x[100],s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=0;
		scanf("%d",&x[i]);
		for(j=1;j<x[i];j++)
		{
			if(x[i]%j==0)
			{
				s+=j;
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