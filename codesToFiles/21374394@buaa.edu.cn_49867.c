"""
2022-03-26 14:32:44
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 3 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include<stdio.h>
void memset (char *prime,int x,int n)
{
	for(int i=0;i<n;i++)
	prime[i]=1;
}
double jicheng(int n)
{
	double y=1.0;
	for(int i=1;i<=n;i++)
	{
		y*=i;
	}
	return y;
}
int main()
{
	unsigned int n;
	double e=1.0;
	scanf("%u",&n);
	if(n>18)
	n=18;
	for(int i=1;i<=n;i++)
	{
		e+=1.0/jicheng(i);
	}
	printf("%.14f",e);

	return 0;
}