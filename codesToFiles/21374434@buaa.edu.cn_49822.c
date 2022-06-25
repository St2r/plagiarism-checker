"""
2022-03-29 21:06:23
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 0 ms | 1732 KB

"""

#include<stdio.h>
int main()
{
	long long n,i=1;
	double e=1,temp=1;
	scanf("%lld",&n);
	if(n>20){
		n=20;
	}
	for(i=1;i<=n;i++){
		temp=temp*i;
		e=e+1/temp;
	}
	printf("%.14lf",e);
	return 0;
}