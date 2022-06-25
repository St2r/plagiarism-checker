"""
2022-03-29 17:57:43
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1684 KB

"""

#include<stdio.h>
double f(n) ;
int main()
{
	int n,i,j=18;
	double sum=1.0;
	scanf("%d",&n);
	if(n<=18)
	{for(i=1;i<=n;i++)
	{sum=sum+f(i);}
	printf("%.14lf",sum);
	}
	else
	{for(i=1;i<=j;i++)
	{sum=sum+f(i);}
	printf("%.14lf",sum);
	}
	return 0;
}

double f(n)
{
if (n <= 1) 
return 1;
return f(n-1)/n;
}