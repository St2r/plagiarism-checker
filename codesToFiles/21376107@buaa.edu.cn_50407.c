"""
2022-03-28 22:29:16
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	long long n,c,i,j;
	double e,b;
	scanf("%lld",&n);
	e=1.0;
	if (n<30){
	for (i=1;i<=n;i++){
		c=1;
		for (j=1;j<=i;j++){
		c=j*c;}
	b=(1.0/c);
	e+=b;
	}
}
    else{
    	for (i=1;i<=30;i++){
		c=1;
		for (j=1;j<=i;j++){
		c=j*c;}
	b=(1.0/c);
	e+=b;
	}
	}
	printf("%.14f",e);
	return 0;
}