"""
2022-03-29 21:27:08
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
int main(){
	int n,i;
	long long int j;
	double a=1.0;
	scanf("%d",&n);
	for(i=j=1;i<=n&&i<18;i++)
	{
		j*=i;
		a+=(1.0*(1.0/j));
	}
		printf("%.14lf",a);
	return 0;
}