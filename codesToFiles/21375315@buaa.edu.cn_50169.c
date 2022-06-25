"""
2022-03-27 00:30:06
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include<stdio.h>
int main()
{
	long long unsigned n;
	scanf("%llu",&n);
	double e=1;
	double i,k;
	double t; 
	for(i=1;i<=n&&i<100;i++)
	{   
	t=1.0;
		for(k=1;k<=i;k++)
		{
			t=t/k;
		}
	    e=(e+t);
	}
	printf("%.14f",e);
	return 0;
}