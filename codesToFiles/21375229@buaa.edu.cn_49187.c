"""
2022-03-29 16:26:35
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include <stdio.h>

int main()
{
	int n,i;
	double e=1,m=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<=17)
		{
			m*=i;
			e+=1.0/m;
		}
		else
		break;
	}
	printf("%.14f",e);
	return 0;
}