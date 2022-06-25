"""
2022-03-27 16:50:29
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 11 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1552 KB
Accepted | 1 * (2 / 10) | 2 ms | 1536 KB
Accepted | 1 * (4 / 10) | 2 ms | 1628 KB

"""

#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,i;
	long long l=1;
	double pi=1;
	scanf("%d",&n);
	if(n>30)
		n=60;
	for(i=1;i<=n;i++)
	{
		l*=i;
		pi+=(double)1/l;
	}
	printf("%.14f",pi);
	return 0;
}