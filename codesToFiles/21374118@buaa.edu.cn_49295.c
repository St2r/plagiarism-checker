"""
2022-03-27 20:42:04
WA
0.6
Accepted | 1 * (1 / 10) | 11 ms | 1544 KB
Accepted | 1 * (1 / 10) | 13 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 14 ms | 1596 KB
Wrong Answer | 0 * (4 / 10) | 11 ms | 1704 KB

"""

#include <stdio.h>
int main ()
{
	int n;
	double sum=2,x=1,i=2;
	scanf("%d",&n);
	if(n<=16)
	{
		while (i<=n)
	 { 
		x=x*(1.0/i);
		sum+=x;
		i++; 
	 }
	 printf("%.14f",sum);
	}
	else
	printf("2.7182818284590");
	return 0;
}