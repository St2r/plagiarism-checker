"""
2022-03-26 13:45:37
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1732 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include<stdio.h>

int main()
{
	int i=1,n;
	double sum=1.0,s,a=1.0;
	scanf("%d",&n);
	if(n<20)
	n=n;
	else
	n=20;
	for(i=1;i<=n;i++)
	{
		a*=i;
		s=1/a;
		sum+=s;
	}
	printf("%.14f",sum);
	return 0;
}