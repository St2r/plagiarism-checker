"""
2022-03-28 16:52:08
TLE
0.6
Accepted | 1 * (1 / 10) | 3 ms | 1720 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 888 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double sum=1,m=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m*=i;
		sum+=1.0/m;
	}
	printf("%.14f",sum);
	return 0;
}