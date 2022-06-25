"""
2022-03-26 15:24:24
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 4 ms | 1640 KB
Accepted | 1 * (2 / 10) | 3 ms | 1620 KB
Accepted | 1 * (2 / 10) | 3 ms | 1688 KB
Accepted | 1 * (4 / 10) | 2 ms | 1640 KB

"""

#include<stdio.h>
int main()
{
	int m, n;
	double stg = 1.0;
	double sum = 1.0;
	scanf("%d", &n);
	if(n>=17)
	{
		printf("2.71828182845905");
	}
	else
	{
	for(m=1;m<=n;m++)
	{
		stg*=m;
		sum+=1.0/stg;
	}
	printf("%.14lf", sum);	
	}
}