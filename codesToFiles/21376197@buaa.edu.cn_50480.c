"""
2022-03-26 15:22:49
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 3 ms | 1652 KB
Accepted | 1 * (2 / 10) | 3 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1624 KB


"""

#include<stdio.h>
int main()
{
	long long int n,i,k;
	double sum,j;
	sum = 1;
	scanf("%lld",&n);
	if(n<=17){
	for(i=1;i<=n;i++){
		j=1;
	for(k=1;k<=i;k++){
		j=j*k;
	}
	sum = sum + 1/j;
	}
	printf("%.14lf",sum);
}
    if(n>17)
    printf("2.71828182845905");
    return 0;
}