"""
2022-03-26 15:54:00
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1548 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1552 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int n,i=1;
	double e=1,sum=1;
	scanf("%d",&n);
	while(i<n+1)
	{
		sum/=i;
		if(sum<1e-20) break;
		e+=sum;
		i++;
	}
	printf("%.14f",e);
	return 0;
 }