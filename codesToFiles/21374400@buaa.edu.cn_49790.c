"""
2022-03-27 13:32:40
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1604 KB
Accepted | 1 * (1 / 4) | 2 ms | 1664 KB
Accepted | 1 * (1 / 4) | 3 ms | 1708 KB
Accepted | 1 * (1 / 4) | 5 ms | 1604 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double sum=1,a=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<=17)
		{
		
			for(j=i;j>0;j--)
			{	
				a*=(1.0/j);
			}
		}
		else if(i>17)
		{
			
			for(j=18;j>0;j--)
			{
				a*=(1.0/j);
			}
		}
		sum+=a;
		a=1;
	}
	printf("%.14lf",sum);
	return 0;
}