"""
2022-03-27 16:01:53
AC
1.0
Accepted | 1 * (3 / 5) | 3 ms | 1668 KB
Accepted | 1 * (1 / 5) | 16 ms | 1768 KB
Accepted | 1 * (1 / 5) | 2 ms | 1668 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,x=1;
	double e=0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=1;
		for(j=1;j<=i;j++)
		{
			x*=j;
		}
		e+=1.0/x;
		if(e<=0.000000000000001)
		break;
	}
	printf("%.14lf",1+e);
	return 0;
}