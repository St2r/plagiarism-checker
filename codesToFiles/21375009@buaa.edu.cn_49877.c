"""
2022-03-29 20:36:15
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (4 / 10) | 0 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	double n,m=1,i,a,b,e;
	scanf("%lf",&n);
	e=1;
	for(i=1;i<=n;i++){
	m=m*i;
	a=1/m;
	e=e+a;
	b=a*100000000000000-1;
	if(b<0)
	break;
}
	printf("%.14lf",e);
	return 0;
 }