"""
2022-03-28 14:03:00
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 2 ms | 1644 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=20)
	{
	double a[n],e=1;
	for(int i=0;i<n;i++)
	{
		a[i]=1;
		for(int j=1;j<=i+1;j++)
		{
			a[i]=a[i]*j;
			
		}
		e=1/a[i]+e;
	}
	printf("%.14lf",e);
    } 
    else
    {
    	printf("2.71828182845905");
	}
	return 0;
}