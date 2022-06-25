"""
2022-03-29 16:28:30
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1720 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include <stdio.h>
int main()
{
	unsigned int n;
	int i;
	double e=1;
	scanf("%u",&n);
	if(n>20)
	n=20;
	for(i=1;i<=n;i++)
	{
		int k;
		double m=1;
	 for(k=1;k<=i;k++)
	 {
	 	m=m*(1.0/k);
	 }
	 e=e+m;
	 } 
	printf("%.14f",e);
	return 0;
}