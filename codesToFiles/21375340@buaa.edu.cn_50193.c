"""
2022-03-27 15:49:25
AC
1.0
Accepted | 1 * (3 / 5) | 2 ms | 1552 KB
Accepted | 1 * (1 / 5) | 3 ms | 1628 KB
Accepted | 1 * (1 / 5) | 2 ms | 1704 KB

"""

#include<stdio.h>
#include<math.h>
int main ()
{    
	long long n,x=1,i; 
	double e=1,E;
	E = exp(1);
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		x = x*i;
		e += 1.0 / x;
		if (fabs(E - e) < 1e-15)
		{
			break;
		}
	}
	printf("%.14f", e);
	 return 0;
}