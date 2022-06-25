"""
2022-03-28 22:20:01
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include <stdio.h> 
int main ()
{
	int n ;
	scanf ("%d", &n);
	int m , i ;
	double sum , jc;
	for (i = 1  , sum =1; i <= n ; i++)
	{
		for (m = 1  , jc = 1; m <= i ; m++)
		{
			jc *= 1.0/m;

		}
		sum += jc;
			if (jc < 0.000000000000001)
			{
				break;
			}
	}
	printf ("%.14lf", sum);
	return  0;
}