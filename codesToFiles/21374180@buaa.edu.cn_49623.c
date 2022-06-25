"""
2022-03-28 23:23:24
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (4 / 10) | 0 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	double j=1,sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j*=i;
		sum+=(1/j);
		if( (1/j)<1e-14 )
		{
			break;
		}
	}
	printf("%.14f",sum);
}