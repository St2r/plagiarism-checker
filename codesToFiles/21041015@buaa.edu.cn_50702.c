"""
2022-03-27 10:48:57
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

# include <stdio.h>
# include <stdlib.h>

double fact(int n) {
	double value = 1,i;
	for (i=1;i<=n;i++) {
		value *= i;
	}
	return value;
}
int main() 
{
	int n,i = 0;
	double value = 0.0;
	scanf("%d",&n);
	if(n>100) 
	{
		n=100;
	}
	for (;i<=n;i++) {
		value += (1.0/fact(i));
	}
	printf("%.14lf",value);
	return 0;
}