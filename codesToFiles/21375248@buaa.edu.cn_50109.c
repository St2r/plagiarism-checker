"""
2022-03-28 22:36:20
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 0 ms | 1712 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double temp = 1;
	double sum = 1;
	int i=0;
	for (i=1;i<=n;i++)
	{
		temp/=i;
		sum+=temp;
		if (i == 18)
		{
			break;
		}
	}
	printf("%.14f",sum);
	return 0;
}