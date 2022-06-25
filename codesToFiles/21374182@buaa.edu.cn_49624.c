"""
2022-03-29 21:49:31
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (1 / 10) | 0 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

#include <stdio.h>
int main()
{
	double e,m;
	int n,i;
	scanf("%d",&n);
	
	for(i=0,m=1,e=0;(i<=n&&i<18);i++,m*=i)
	{
		e+=1.0/m; 
	}

	printf("%.14f",e);
	return 0;
 }