"""
2022-03-26 13:34:49
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1644 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include<stdio.h>
#define EPS 1e-15
int main()
{
	int n;
	scanf("%d",&n);
	if(n>30)	n=30;
	int i;
	double sum=1,fact=1.0;
	for(i=1;i<=n;i++)
	{
		fact = fact/i;
		sum+=fact;
	}
//	printf("%d\n",i);
	printf("%.14f",sum);
	return 0;
}