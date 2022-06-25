"""
2022-03-29 21:53:54
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 0 ms | 1640 KB
Accepted | 1 * (2 / 10) | 0 ms | 1756 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	double e,m;
		m=1;
		e=1;
	if(n<=20)
	{
		for(i=1;i<=n;i++)
		{
			m=i*m;
			e=e+1/m;

		}
	}else{
		for(j=1;j<=20;j++)
		{
			m=j*m;
			e=e+1/m;
		}
	}
	printf("%.14lf",e);
	return 0;
}