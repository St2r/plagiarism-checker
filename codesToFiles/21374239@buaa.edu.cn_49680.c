"""
2022-03-26 16:53:50
AC
1.0
Accepted | 1 * (1 / 10) | 14 ms | 1708 KB
Accepted | 1 * (1 / 10) | 12 ms | 1672 KB
Accepted | 1 * (2 / 10) | 14 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1720 KB
Accepted | 1 * (4 / 10) | 11 ms | 1604 KB

"""

#include <stdio.h>

int main()
{
	int n;
	long long j=1;
	double e=1.0;
	scanf("%d",&n);
	if(n<=16){
	for(int i=1;i<=n;i++){
		j*=i;
		e+=1.0/j;
		}
	printf("%.14f",e);
	}
	else {
		printf("2.71828182845905");
	}
	return 0;
}