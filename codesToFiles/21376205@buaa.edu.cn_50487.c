"""
2022-03-29 23:27:38
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	long long m=1;
	double sum=1;
	scanf("%d",&n);
	if(n<=18)
	{
		for(i=1;i<=n;i++)
		{
			m=m*i;
			sum=sum+((double)1.0/(double)m);
		}
	}
	else
	{
		sum=2.718281828459045;
	}
	printf("%.14f",sum);
	return 0;
}