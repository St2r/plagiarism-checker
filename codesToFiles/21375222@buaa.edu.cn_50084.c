"""
2022-03-26 09:07:45
AC
1.0
Accepted | 1 * (1 / 10) | 15 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 13 ms | 1624 KB
Accepted | 1 * (2 / 10) | 7 ms | 1688 KB
Accepted | 1 * (4 / 10) | 14 ms | 1668 KB

"""

#include <stdio.h>
int main()
{
	double n,i,x=1;
	double sum=1.0;
	scanf("%lf", &n);
	if(n<=20.0)
	{
	for(i=1;i<=n;i++)
	{
		x = x*1/i;
		sum += x; 
	}
    }
    else
    {
    	for(i=1.0;i<=20.0;i++)
	{
		x = x*1/i;
		sum += x; 
	}
	}
	printf("%.14f", sum);
	return 0;
}