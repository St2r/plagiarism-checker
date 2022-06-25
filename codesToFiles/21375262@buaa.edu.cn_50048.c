"""
2022-03-26 10:09:05
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 11 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 11 ms | 1608 KB
Accepted | 1 * (4 / 10) | 11 ms | 1700 KB

"""

#include <stdio.h>
int main()
{
	double n,e=1,i,m,k;
	scanf("%lf",&n);
	if(n>=17)
	n=17;
	for(i=1;i<=n;i++)
	{
		m=1;
		for(k=1;k<=i;k++)
		{
			m=m*k;	
		}
		e=e+1.0/m;
	}
	printf("%.14lf",e);
	return 0;
}