"""
2022-03-29 21:48:40
TLE
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include<stdio.h>
int main()
{
	int n=0;
	long long i=1,d=1;
	double e=1;
	scanf("%d",&n);
	while(i<=n)
	{
	d=d*i; 
	e=e+1.0/d;
	i++;
}
printf("%.14lf",e);
	return 0;
}