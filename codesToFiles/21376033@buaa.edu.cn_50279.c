"""
2022-03-28 23:09:40
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 0 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include <stdio.h>
#define eps 1e-14
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	double jiecheng=1,he=1;
	for(i=1;i<=n;i++)
	{
		jiecheng=jiecheng*i;
		he=he+1/jiecheng;
		if(1/jiecheng<eps)
		break;
	}
	printf("%.14f",he);
	return 0;
}