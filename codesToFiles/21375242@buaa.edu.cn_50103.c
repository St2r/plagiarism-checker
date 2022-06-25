"""
2022-03-27 16:41:59
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1680 KB

"""

#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	double a=1,b=1;
	for(i=1;i<=n;i++)
	{
		b*=i;
		a+=(1.0/b);
		if(i>=20)
		break;
	}
	printf("%.14f",a);

     return 0;
}