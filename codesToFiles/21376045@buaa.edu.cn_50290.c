"""
2022-03-30 15:58:30
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1668 KB
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1676 KB

"""

#include<stdio.h> 
int main()
{
	int n,min;
	double sum=1.0,m=1.0;
	scanf("%d",&n);
	if(n>17) min=17;
	else min=n;
	for(int i=1;i<=min;i++)
	{
	  m*=i;
	  sum+=1.0/m;
	}
	printf("%.14lf",sum);
	return 0;
}
