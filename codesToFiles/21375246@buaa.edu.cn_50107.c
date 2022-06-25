"""
2022-03-26 11:42:21
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 18 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1596 KB
Accepted | 1 * (4 / 10) | 9 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int i,n,j;
	double e=1,ret=1;
	scanf("%d",&n);
	if(n>20)
	n=20;
	for(i=1;i<=n;i++)
	{
		ret*=i;
		e+=1.0/ret;
	}
	printf("%.14lf",e);
	return 0;
}