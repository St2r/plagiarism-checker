"""
2022-03-27 11:21:47
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include <stdio.h>
int main()
{
	int i,n;
	double sum,j;
	sum=1.0,j=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i ++)
	{
		sum=sum+(j/i);
		j=(j/i);
		if(i==17)
		break;		
	}
	printf("%.14lf",sum);
	return 0;
}