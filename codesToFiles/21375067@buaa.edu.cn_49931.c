"""
2022-03-26 12:54:54
AC
1.0
Accepted | 1.0 * (3 / 15) | 3 ms | 2048 KB
Accepted | 1.0 * (2 / 15) | 2 ms | 2048 KB
Accepted | 1.0 * (4 / 15) | 3 ms | 2100 KB
Accepted | 1.0 * (1 / 15) | 2 ms | 2096 KB
Accepted | 1.0 * (5 / 15) | 2 ms | 2104 KB
000 ms | 960 KB

"""

#include<stdio.h>
int main()
{
	int n,i,part;
	unsigned long long j;
	double sum=0;
	scanf("%d",&n);
	if(n>=100000){n=100000;}
	for(i=1;i<=n;i++)
	{
		part=1;
		for(j=1;j<=i;j++)
		{
			part*=j;
		}
		sum+=1.0*1/part;
	}
	printf("%.14lf",sum+1);
	return 0;
}