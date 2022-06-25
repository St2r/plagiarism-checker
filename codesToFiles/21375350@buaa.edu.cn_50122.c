"""
2022-03-29 22:28:17
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1656 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (4 / 10) | 0 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n, i, j;
	double e=1, sum=1;
	scanf("%d",&n);
	if(n<=20)
	{
        for(i=1;i<=n;i++)
		{
			sum=1;
			for(j=1;j<=i;j++)
			{
                sum=sum*j;
			}	
			e=e+1/sum;	
		}
	printf("%.14f\n",e);
	}
	else
	{
		printf("2.71828182845905\n");
	}
	return 0;
}