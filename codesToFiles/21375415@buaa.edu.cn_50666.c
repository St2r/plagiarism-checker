"""
2022-03-28 22:03:30
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 0 ms | 1680 KB

"""

#include<stdio.h>

int main()
{
	long long a,b,i;
	double c;
	scanf("%lld",&a);
    c=1;
    b=1;
	if(a<=17)
    {
		for(i=1;i<=a;i++)
	{
		b=b*i;
		c+=1.0*1/b;
	}
	printf("%.14lf",c);
	}
	else
	printf("2.71828182845905");
	return 0;
	
}