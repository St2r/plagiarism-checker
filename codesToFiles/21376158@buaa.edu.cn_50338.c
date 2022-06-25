"""
2022-03-27 21:21:38
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1676 KB

"""

#include<stdio.h>
int main(){
	long long n;
	double i=0,a=1,m=1;
	scanf("%lld",&n);
	while(i<n&&(1/a)>=0.00000000000001){
		i++;
		a=a*i;
		m+=(1/a);
	}
	printf("%.14f",m);
	return 0;
}