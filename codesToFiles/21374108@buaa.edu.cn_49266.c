"""
2022-03-28 10:50:42
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

# include <stdio.h>
int main()
{
	int n,i,j;
	double sum,a;
	sum=1.0;
	scanf("%d",&n);
	
	for(i=1;i<=n&&i<=17;i++)
	{
	    a=1.0;
		for(j=1;j<=i;j++)
		{
			a=a*j;
		}
	sum=sum+1/a;
	}
	printf("%.14lf",sum);
	return 0;
}