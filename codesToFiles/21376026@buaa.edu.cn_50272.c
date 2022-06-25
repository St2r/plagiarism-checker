"""
2022-03-30 16:52:11
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1652 KB
Accepted | 1 * (4 / 10) | 1 ms | 1752 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	if(n>17)
	n=17;
	double tmp=1.0,a=1.0;
	for(i=1;i<=n;i++)
	{
	tmp*=i;
	a=a+1/tmp;}
	printf("%.14lf\n",a);
}