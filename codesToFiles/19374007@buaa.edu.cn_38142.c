"""
2022-03-26 09:40:16
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1688 KB
Accepted | 1 * (35 / 100) | 2 ms | 1620 KB
Accepted | 1 * (60 / 100) | 2 ms | 1540 KB

"""

#include<stdio.h> 
int main()
{
	int n,i,j;
	double sum=1.0;
	unsigned long long a=1;
	scanf("%d",&n);
	if(n<=17)
	{
		n=n;
	}
	else
	{
		n=17;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			a*=j;	
		}
		sum+=1.0/a;
		a=1;
	}
	printf("%.14f",sum);
	return 0;
}