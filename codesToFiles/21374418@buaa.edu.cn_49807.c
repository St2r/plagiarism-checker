"""
2022-03-29 23:58:07
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1636 KB
Accepted | 1 * (4 / 10) | 0 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double sum=1,m=1;
	scanf("%d",&n);
	if(n>=100)
	n=100;
	for(i=1;i<=n;i++)
	{
		m=m*i;
		sum=sum+1/m;
	}
	printf("%.14lf",sum);
	return 0;
}