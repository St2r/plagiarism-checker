"""
2022-03-27 10:35:06
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 14 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 3 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,k,a[1000]={0};
	double b=1;
	double c,d=1,e=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=(double)1/i;
		d=d*c;
		b+=d;
		if(d<1e-14)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	printf("%.14lf",b);
	return 0;
	
}