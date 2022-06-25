"""
2022-03-29 02:39:55
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 0 ms | 1692 KB

"""

#include<stdio.h>
int main(){
	long long n,i=0,b=1,j;
	double a,c;
	scanf("%lld",&n);
		if(n<32)
	n=n;
	else n=32;
   	for(i=0;i<n;i++) {
	b=b*(i+1);	
    c=(double)1/b;
    a=a+c;
}
    printf("%.14f",a+1);
	return 0;
}