"""
2022-03-28 20:57:33
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 0 ms | 1744 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include<stdio.h>
double fun(double);
int main()
{
	double sum=1;
	int n,i;
	scanf("%d",&n);
	if(n>17)
	n=17;
	for(i=1;i<=n;i++)
	{
		sum+=fun(i);
	}
	printf("%.14lf\n",sum); 
		return 0;
}
double fun(double i)
{
	static double m=1;
	m=m/i;
	return m;
}