"""
2022-03-29 08:52:00
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 0 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double sum=1,a=1;
	scanf("%d", &n);
	if(n<20)
	for(i=1;i<=n;i++)
	{ 
		a = a*i;
		sum+=1/a;
	}
	else
	{
		for(i=1;i<=20;i++)
	{ 
		a = a*i;
		sum+=1/a;
	}
	}
	printf("%.14lf", sum);
	return 0;
}