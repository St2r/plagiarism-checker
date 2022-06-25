"""
2022-03-26 14:56:34
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 9 ms | 1680 KB
Accepted | 1 * (2 / 10) | 9 ms | 1700 KB
Accepted | 1 * (4 / 10) | 8 ms | 1608 KB

"""

#include<stdio.h>
int main()
{
	long long int i,n;
	double sum,j;
	
	scanf("%lld",&n);
	j=1;sum=1;
	
	for(i=1;i<=n;i++)
	{
		j=j*i;
		sum=sum+(1/j);
		if((1/j)<0.000000000000001){break;}
	}
	printf("%.14f",sum);
	return 0;
}