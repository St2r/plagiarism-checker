"""
2022-03-29 20:33:55
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1752 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 0 ms | 1648 KB
Accepted | 1 * (4 / 10) | 1 ms | 1728 KB

"""

#include <stdio.h>
long long fun(int);
int main()
{
	int n;
	double sum=1;
	scanf("%d",&n);
	int i;
	
	if(n<18)
	{
		for(i=1;i<=n;i++)
		{
			sum=sum+1.0/fun(i);
		}
		printf("%.14f\n",sum);
	}
	else
	{
	printf("2.71828182845905\n");
	}

	return 0;
 } 
 
long long fun(int a)
 {
 	long long m=1;
 	int j;
 	for(j=1;j<=a;j++)
 	{
 		m = m * j;
	 }
	 return m;
 }