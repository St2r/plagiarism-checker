"""
2022-03-27 16:52:42
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 11 ms | 1568 KB
Accepted | 1 * (60 / 100) | 8 ms | 1704 KB

"""

#include <stdio.h>

int main()
{
	int n,i,j,s=0;
	scanf("%d",&n);
	int x[105]={0};
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
		j=1;
		s=0;
		for(j=1;j<x[i];j++)
		{
			if(x[i]%j==0)
			s+=j;
		}
		if(s==x[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	
	return 0;
 }