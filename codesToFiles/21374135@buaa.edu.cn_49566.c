"""
2022-03-27 00:53:39
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1592 KB
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double sum=1.0;
	double x=1;
	scanf("%d",&n);
	
	if(n>=20)
		{n=20;}
	for(i=1;i<=n;i++)
	{
		x=x*1/i;
		sum=sum+x;
	}
	printf("%.14lf",sum);
	return 0;
}