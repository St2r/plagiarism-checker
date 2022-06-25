"""
2022-03-29 23:42:45
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include <stdio.h>

int main()
{
	int n , i , j;
	scanf("%d",&n);
	if(n<=22)
	{
		n=n;
	}
	else
	{
		n=22;
	}
	double a[n] , sum=0.0;
	for(i=0;i<n;i++)
	{
		a[i]=1.0;
		for(j=1;j<=i+1;j++)
		{
			a[i]=a[i]/j;
		}
		sum=sum+a[i];
	}
	printf("%.14f",sum+1);
	return 0;
}