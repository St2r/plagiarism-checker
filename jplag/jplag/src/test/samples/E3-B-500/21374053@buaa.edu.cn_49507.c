"""
2022-03-27 18:53:57
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,p,num=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&p);
		for (j=1;j<=p/2;j++)
		{
			if(p%j==0)num+=j;
		}
		if(num==p)printf("YES\n");
		else printf("NO\n");
		num=0;
	}
	return 0;
	
 }