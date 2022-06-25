"""
2022-03-29 22:52:16
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1664 KB

"""

#include<stdio.h>
#include<math.h>
#define eps 1e-10
int main()
{
	int n,i;
	double sum=1,m=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i>1000)
		 break;
		else
		m*=(1.0/i);
		sum+=m;
	}
	printf("%.14f",sum);
	return 0;
}