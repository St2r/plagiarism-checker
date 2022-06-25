"""
2022-03-29 21:19:55
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (4 / 10) | 1 ms | 1752 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double plus=1;
	double answer=1;
	for(int i=1;i<=n;i++)
	{
		plus=plus/i;
		answer+=plus;
		if(plus<1e-14)
		break;

	}
	printf("%.14lf",answer);
	
}