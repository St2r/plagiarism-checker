"""
2022-03-28 18:16:25
AC
1.0
Accepted | 1 * (1 / 10) | 8 ms | 1648 KB
Accepted | 1 * (1 / 10) | 3 ms | 1696 KB
Accepted | 1 * (2 / 10) | 3 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1700 KB

"""

#include<stdio.h>
#include<math.h>

#define eps 1e-14

int main()
{
	int n,i;
	long long m=1;
	double e=1.0;
	scanf("%d",&n);
	if(n<17)
	{
		for(i=1;i<=n;i++)
		{
			m*=i;
			e+=1.0/m;
		}
	}
	else
	{
		for(i=1;i<=17;i++)
		{
			m*=i;
			e+=1.0/m;
		}
	}
	
	printf("%.14f\n",e);
	
	return 0;
}