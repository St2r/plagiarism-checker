"""
2022-03-28 22:02:22
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 0 ms | 1692 KB
Accepted | 1 * (4 / 10) | 1 ms | 1640 KB

"""

#include<stdio.h>
int main()
{
	
	double c,d=1,e=0;
	double b=1;
	int n,i,j,k,a[1000]={0};
	
	
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