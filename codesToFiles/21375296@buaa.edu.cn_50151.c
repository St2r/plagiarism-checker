"""
2022-03-29 13:46:49
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include<stdio.h>
int main ()
{
	int n,i,j;
	double k=1;
	double d=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1,k=1;j<=i;j++)
		{
			k=k*j;
		}
		d=d+(1/k);
		if(i>=17)
		break;
	}
	printf("%.14f",d+1);
	return 0;
}