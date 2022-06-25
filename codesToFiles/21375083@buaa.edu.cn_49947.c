"""
2022-03-26 12:38:13
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include<stdio.h> 
long long fact(int n)
{
	if(n==1)
	return 1;
	else
	return ((fact(n-1))*n);
}
int main()
{
	int n;
	int i;
	double e=1;
	scanf("%d",&n);
	for(i=1;i<=n&&i<=17;i++) {
		e+=(1.0/fact(i));
	}
	printf("%.14f",e);
	return 0;
}