"""
2022-03-26 18:47:25
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1668 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	double n,jie=1.0;
	double e=1;
	scanf("%lf",&n);
	for (int a=0;a<n;a++)
	{
		if (a>=20)
		{
			break;
		}else
		jie *=(a+1);
		e += 1/jie;
	}
	printf("%.14f",e);
	return 0;
}