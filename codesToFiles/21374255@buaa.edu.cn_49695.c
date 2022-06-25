"""
2022-03-29 14:46:24
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1744 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
	int n,i=1;
	double e=1,b,a=1;
	scanf("%d",&n);
	while(i<=n){
	a=a*i;
	b=(double)1/a;
	if(b<1e-28){
	break;
	}
	e=e+b;
	i++;
	}
	printf("%.14f",e);
	return 0;
}