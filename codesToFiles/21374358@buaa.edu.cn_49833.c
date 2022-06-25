"""
2022-03-27 17:08:26
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 3 ms | 1548 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB
4 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double r=1.0,sum=1.0;
	scanf("%d",&n);
	if(n<18)
	{
		for(i=1;i<=n;i++)
		{
			r=(r/i);
			sum=sum+r;	
		}	
	}
	if(n>=18)
	{
		for(i=1;i<18;i++)
		{
			r=(r/i);
			sum=sum+r;	
		}
	}
	printf("%.14f",sum);
return 0;
}