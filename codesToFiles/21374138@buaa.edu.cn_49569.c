"""
2022-03-26 13:29:41
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1728 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include<stdio.h>

int main()
{
	long long n;
	scanf("%lld",&n);
	double a[30],m=1.0;
	a[0]=1.0;
	int i=0;
	while(i<n&&i<25)
	{
		i=i+1;
		a[i]=a[i-1]/i;
		m=m+a[i];
	}
	printf("%.14f",m);
	
	return 0;
}