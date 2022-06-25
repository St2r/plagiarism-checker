"""
2022-03-26 16:34:01
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 3 ms | 1616 KB
Accepted | 1 * (2 / 10) | 3 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	double sum=1.0, a=1.0;
	if(n>=17)
		n=17;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			a=a*(1.0/j);
		}
		sum=sum+a;
		a=1.0;
	}
	printf("%.14lf", sum);
	return 0;
}