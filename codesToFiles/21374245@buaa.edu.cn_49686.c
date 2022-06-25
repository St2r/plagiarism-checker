"""
2022-03-29 00:43:13
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 0 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1668 KB

"""

#include <stdio.h>
  int main()
{
	int n,i=1;
	double e=1,a=1;
	scanf("%d",&n);
	while((i<=n)&&(i<=17))
	{  a=a*i;
	   e=e+1/a;
	   i++;
	}
	printf("%.14lf",e);
	return 0;

}