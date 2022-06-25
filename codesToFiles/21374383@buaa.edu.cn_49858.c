"""
2022-03-26 08:35:02
AC
1.0
Accepted | 1 * (1 / 4) | 7 ms | 1596 KB
Accepted | 1 * (1 / 4) | 9 ms | 1604 KB
Accepted | 1 * (1 / 4) | 6 ms | 1668 KB
Accepted | 1 * (1 / 4) | 11 ms | 1664 KB
| 15 ms | 1664 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 832 KB

"""

#include<stdio.h>
int main()
{
	int i,n;
	double sum=1.0,m=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m*=i;
		sum+=1.0/m;
	}
	printf("%.14f",sum);
	return 0;
}