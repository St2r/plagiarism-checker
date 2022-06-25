"""
2022-03-29 10:18:01
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1676 KB

"""

#include<stdio.h>

int main()
{
	int n,i;
	double j=1,sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=j*i;
		sum=sum+1.0/j;
		if(i==18)
		break;
	}
		printf("%.14lf",sum);
	return 0;
}