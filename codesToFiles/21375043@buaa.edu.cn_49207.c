"""
2022-03-26 09:29:09
AC
1.0
Accepted | 1 * (1 / 10) | 12 ms | 1656 KB
Accepted | 1 * (1 / 10) | 9 ms | 1608 KB
Accepted | 1 * (2 / 10) | 11 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 20 ms | 1664 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	double a=1.0,e=1.0;
	scanf("%d",&n);
	if(n>20){
		n=20;
	}
	for(i=1;i<=n;i++){
		a/=(double)i;
		e+=a;
	}
	printf("%.14f",e);
	return 0;
}