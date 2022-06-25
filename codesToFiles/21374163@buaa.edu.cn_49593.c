"""
2022-03-26 16:31:01
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1552 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1552 KB
Accepted | 1 * (4 / 10) | 2 ms | 1556 KB

"""

#include<stdio.h>
int main()
{	int m,n,i,j;
	double e=1,tmp;
	scanf("%d",&m);
	if(m<=17)
	n=m;
	else
	n=17;
	for(i=1;i<=n;i++)
	{	tmp=1;
		for(j=1;j<=i;j++)
		{
			tmp*=j;
		}
		e+=1.0/tmp;
	}
	printf("%.14f",e);
	return 0;
}