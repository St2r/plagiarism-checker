"""
2022-03-26 23:05:28
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 3 ms | 1700 KB
Accepted | 1 * (2 / 10) | 3 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
	int n,i,j;
	double a[25],sum=0;
	a[0]=1;
	for(i=1;i<25;i++)
	{
		a[i]=a[i-1]/(double)i;
	}
	scanf("%d",&n);
	if(n<=24)
	{
	for(j=0;j<=n;j++)
		sum+=a[j];
	}
	else
	{
	for(j=0;j<=24;j++)
		sum+=a[j];
	}
	printf("%.14f",sum);
	return 0;
}