"""
2022-03-27 21:46:09
WA
0.4
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1676 KB
Wrong Answer | 0 * (4 / 10) | 2 ms | 1716 KB

"""

#include <stdio.h>

int main ()
{
	int n,d;
	double sum=1.0;
	int i,j;
	scanf("%d",&n);
	if (n>=45)
	   n=45;
	for (i=1;i<=n;i++)
	{
		d=1;
		for (j=1;j<=i;j++)
		{
			d*=(j*1.0);
		}
		sum+=1.0/(d*1.0);
	}
	printf("%.14lf",sum);
	return 0;
}