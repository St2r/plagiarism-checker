"""
2022-03-28 00:10:20
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1712 KB
Accepted | 1 * (60 / 100) | 10 ms | 1660 KB

"""

#include <stdio.h>

int main()


{
	int n;
	double si,sum=0;
	scanf("%d",&n);
	if(n<=34)
	{
		for(int j=1,k=1;j<=n;j++)
		{
		for (int i=1;i<=j;i++)
		{
			k*=i;
		}
		si=(1.0)/k;
		
		sum+=si;
		
		k=1;
		}
	}
	else
	{
		for(int j=1,k=1;j<=35;j++)
		{
		for (int i=1;i<=j;i++)
		{
			k*=i;
		}
		si=(1.0)/k;
		
		sum+=si;
		
		k=1;
		}
	}
	printf("%.14f\n",sum);
	return 0;
}