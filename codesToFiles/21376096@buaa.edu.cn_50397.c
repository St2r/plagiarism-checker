"""
2022-03-29 23:33:08
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1636 KB
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 0 ms | 1748 KB
Accepted | 1 * (4 / 10) | 0 ms | 1736 KB

"""

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define PI acos(-1)
#define eps 1e-8
//0.6fen 有问题的代码 

int main()
{
	int n, i, j;
	double y=1, z=1;
	scanf("%d",&n);//n的阶乘基本上在17的阶乘，为了不超时 n到20左右就差不多了 
	if (n>=20) n=20; 
	{
		for (i=1; i<=n; i++)
	{
		for (j=i;j>0 ;j--)
		{
			y=y/j;
		}
		z=z+y;
		y=1;
	}
	printf("%.14f",z);
	}
	
	return 0;
}