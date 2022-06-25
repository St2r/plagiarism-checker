"""
2022-03-29 23:05:20
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 0 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1568 KB

"""

#include<stdio.h>

int main(){
	long long n;
	double d=1;
	long long sum=1;
	scanf("%lld",&n);
    if(n<=17){
	
	for(int r=1;r<=n;r++){
		sum=1;
		for(int i=1;i<=r;i++){
			sum=sum*i;

		}
		d=d+(1.0/sum);
	}
	printf("%.14lf",d);
	}
	
	else printf("2.71828182845905");
	
	return 0;
}