"""
2022-03-26 19:01:34
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 4 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (4 / 10) | 2 ms | 1604 KB

"""

#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	double e=1,k=1;
	if(n<=17){
		for(i=1;i<=n;i++){
		k*=i;
		e+=1/k;
	}
	printf("%.14f",e);
	}
	if(n>17){
		printf("2.71828182845905");
	}
	return 0;
}