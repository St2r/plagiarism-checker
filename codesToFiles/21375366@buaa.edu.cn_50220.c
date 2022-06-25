"""
2022-03-28 18:36:00
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double e=1,p=1,delt=1e-15;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		p= p*((double) 1/i);
		if(p<delt) break;
		else e=e+p;
	}
	printf("%.14lf",e);
	return 0;
}