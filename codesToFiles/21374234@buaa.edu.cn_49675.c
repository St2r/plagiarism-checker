"""
2022-03-29 00:30:18
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (4 / 10) | 1 ms | 1640 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double sum=1,a;
	scanf("%d",&n);
	if(n>=20)
	{
		n=20;
	}
	for(i=1,a=1;i<=n;i++)
	{
		sum=sum+a/i;
		a=a/i;	
	}
	printf("%.14f",sum);
	return 0;
}