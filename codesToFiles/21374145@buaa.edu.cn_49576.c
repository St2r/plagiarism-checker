"""
2022-03-27 17:13:49
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (4 / 10) | 2 ms | 1700 KB

"""

#include<stdio.h>

int main()
{
	int n,i,j;
	double sum,s=1.0;
	scanf("%d",&n);
	for(i=1;i<=n&&i<=22;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			s=s*j;
		}
		sum=sum+1/s;
		s=1.0;
	}
	sum=sum+1;
	printf("%.14f\n",sum);
	return 0;
}