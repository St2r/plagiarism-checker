"""
2022-03-30 18:56:41
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1668 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=18) n=17;
	double a=1.0,b=1.0;
	for(int i=1;i<=n;i++){
		a=a*i;
		b=b+(1/a);
	}
	printf("%.14lf",b);
	return 0;
}