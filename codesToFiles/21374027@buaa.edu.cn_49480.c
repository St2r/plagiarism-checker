"""
2022-03-26 13:12:20
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 12 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include <stdio.h>
#define re(a) return a
double jc(double n){
	double a=1; 
	for (double p=1;p<=n;p++){
		a*=p;
	}
	re(a);
}
int main()
{
	double sum=1,n,N;
    scanf("%lf",&n);
    if(n<=18) N=n;
	else if(n>18)  N=18;
    for(int i=1;i<=N;i++){
    	sum+=1.0/jc(i);
		}
	printf("%.14lf",sum);
	re(0);
}