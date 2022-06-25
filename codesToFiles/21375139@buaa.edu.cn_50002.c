"""
2022-03-26 20:06:45
AC
1.0
Accepted | 1 * (1 / 10) | 8 ms | 1692 KB
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 9 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 9 ms | 1616 KB
KB

"""

#include<stdio.h>
int main()
{
	int n,q=1,i;
	double a=1;
	scanf("%d",&n);
	for(i=1;i<=33;i++){
		q=q*i;
		a=a+(double)1/q;
	}printf("%.14f",a);
	return 0;
 }