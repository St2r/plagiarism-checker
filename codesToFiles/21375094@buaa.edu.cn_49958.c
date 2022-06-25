"""
2022-03-26 17:40:49
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1688 KB
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 6 ms | 1652 KB

"""

#include<stdio.h>
#define num 26
int main()
{	double e=1;
	int i;
	int n;
	double an=1;
	scanf("%d",&n);
	
	for(i=1;i<=(n^((n^num)&-(n>num)));i++)
	{	an*=(1.0*1/i);
		e+=an;
	}
	printf("%.14f",e);

	return 0;
}