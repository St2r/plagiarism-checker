"""
2022-03-26 13:32:29
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1652 KB
Accepted | 1 * (1 / 4) | 3 ms | 1716 KB
Accepted | 1 * (1 / 4) | 2 ms | 1712 KB
Accepted | 1 * (1 / 4) | 3 ms | 1628 KB

"""

#include<stdio.h>
int main()
{
	long long n,i,j;
	scanf("%lld",&n);
	double a[10000]={1.0};
	for(i=1,j=1;i<(n+1);i++){
		j=j*i;
		a[i]=1.0*a[i-1]+1.0*1/j;
		if(j>1000000000000000){
			break;
		}
	}
	printf("%.14lf",a[n]);
}