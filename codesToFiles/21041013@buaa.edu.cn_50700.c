"""
2022-03-28 22:28:14
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	double a[105];
	double e=1.0,c=2.0;
	scanf("%d",&n);
	if(n<17)
	{
		a[0]=1;
		for(i=1;i<n;i++)
		{
			a[i]=a[i-1]*c;
			c++;
		}
		for(j=0;j<n;j++)
		{
			e+=1/(a[j]);
		}
		printf("%.14f\n",e);
	}
	else
	{
		printf("2.71828182845905");
	}
	return 0;
}