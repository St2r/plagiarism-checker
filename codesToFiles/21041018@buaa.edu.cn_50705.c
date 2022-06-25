"""
2022-03-26 12:44:59
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (4 / 10) | 5 ms | 1640 KB

"""

#include<stdio.h>
#include<math.h>
int min(int a,int b)
{
	if(a>=b)return b;
	if(a<b)return a;
}
double hydra(int n)
{
	int i;
	double sum=1;
	for(i=1;i<=n;i++)
	{
		sum=sum*1.0/i;
	}
	return sum;
}
int main()
{
	int m,i;
	double sum=0;
	scanf("%d",&m);
	for(i=1;i<=min(1000,m);i++)
	{
		sum+=hydra(i);
	}
	printf("%.14lf",sum+1);
}