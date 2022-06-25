"""
2022-03-29 01:00:52
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 0 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1640 KB

"""

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	double b=1;
	double a[20];
	int i=0,c=1;
	
	for(i=0;i<20;i++)
	{
		double d=1;
		for(c=1;c<=i+1;c++)
		{
			d=d*c;
		}
		a[i]=1/d;
	}
	
	if(n<=20)
	{
		for(i=0;i<n;i++)
		{
			b=b+a[i];
		}
	}
	
	else
	{
		for(i=0;i<20;i++)
		{
			b=b+a[i];
		}
	};
	
	printf("%.14f\n",b);
		
	return 0;
}