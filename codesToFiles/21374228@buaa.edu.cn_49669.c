"""
2022-03-29 19:04:11
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1692 KB

"""

#include <stdio.h>
int main()
{
	double i,j,a,sum;
	int n;
	scanf("%d",&n);
	if(n<=17)
	{
		sum=1;
	for(i=1;i<=n;i++)
	{
		a=1;
		j=1;
	    while(j<=i)
		{
			a=a/j;
			j++;
		}
		sum=sum+a;
	}
	printf("%.14f",sum);
    }
    else
    {
		sum=1;
	for(i=1;i<=17;i++)
	{
		a=1;
		j=1;
			while(j<=i)
		{
			a=a/j;
			j++;
		}
		sum=sum+a;
	}
	printf("%.14f",sum);
	}
	return 0;
}