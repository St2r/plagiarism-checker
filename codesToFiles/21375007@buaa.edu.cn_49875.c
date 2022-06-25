"""
2022-03-29 23:29:43
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 0 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	double euler=1,k=1;
	int n,i,j;
	scanf("%d",&n);
	if(n>18)
	printf("2.71828182845905");
	else
	{
		for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
		k/=j;	
		}
		euler=euler+k;
		k=1.0;
	}
	printf("%.14f",euler);
	}
	
	return 0;
}