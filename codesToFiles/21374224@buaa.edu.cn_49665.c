"""
2022-03-26 23:15:56
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include<stdio.h>
int main()
{
	double x,e=0;
	long long n,i,t=1,a=1;
	scanf("%lld",&n);
	while(t<=n&&t<=18){
		for(i=t-1,a=t;i>=1;i--){
			a=a*i;
		}
		x=1.0/a;
		e=e+x;
		t++;
	}
	printf("%.14f",e+1);
	return 0;
}