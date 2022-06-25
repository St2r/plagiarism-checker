"""
2022-03-29 11:06:24
TLE
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int i;
	
	double m,sum,j;
	j=1;
	for(i=1;i<=n-1;i++)
	{
		j=j*(i+1);
		m=1/j;
		sum+=m;
	}
	sum+=2;
	printf("%.14f",sum);
	return 0;
}