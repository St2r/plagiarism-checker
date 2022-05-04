"""
2022-03-26 23:50:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1560 KB
Accepted | 1 * (35 / 100) | 3 ms | 1664 KB
Accepted | 1 * (60 / 100) | 11 ms | 1688 KB

"""

#include <stdio.h>

int main()
{
	int n,i,j,a,m=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			m=m+j;
		}
		if(m==a)
		printf("YES\n");
		else
		printf("NO\n");
		m=0;
	}
	return 0;
}