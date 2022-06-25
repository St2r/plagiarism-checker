"""
2022-03-27 01:20:42
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 3 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1668 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double e=1,b=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			b=b/j;
		}
		if(b<1e-15)
		break;
		else
		{
		e=e+b;
		b=1;
    	}
	}
	printf("%.14f\n",e);
	return 0;
}