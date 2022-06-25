"""
2022-03-26 21:05:52
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1720 KB

"""

#include<stdio.h>
int main ()
{
	int n;
	double e=0,sum=1.0;
	scanf("%d",&n);
	for(int i=0;i<=n&&i<=18;i++)
	{
		sum=1.0;
		for(int m=0;m<i;m++)
		{
			sum*=m+1;
		}
		e+=1.0/sum;
	}
	printf("%.14f",e);
	return 0;
}