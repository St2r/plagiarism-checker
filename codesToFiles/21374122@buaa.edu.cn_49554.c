"""
2022-03-29 00:07:12
TLE
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include<stdio.h>

int main()
{
	int n,i;
	double a,e=1,m,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m=1;
		for(k=1;k<=i;k++)
		{
			m=m*k;
		}
		e=e+1.0/m;
	}
	printf("%.14f",e);
	return 0;
}