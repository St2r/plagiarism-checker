"""
2022-03-28 21:02:13
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>
int main()
{
	int n,k; scanf("%d", &n);
	double sum = 1.0;
if (n < 40)  k = n; 
		else  k = 40; 
	for (int i = 1; i <= k; i++)
	{
		double j = 1.0;
		
		for (int r = 1; r <= i; r++)
			j = j * (1.0 / r);
		sum += j;
	}printf("%.14lf", sum);
	return 0;
}