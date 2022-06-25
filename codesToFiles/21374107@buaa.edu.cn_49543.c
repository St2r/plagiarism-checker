"""
2022-03-28 23:49:12
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1656 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include <stdio.h>
int main()

{
	long long int n,i,j,x[40],m=1;
	double e=1;
	scanf("%lld",&n);
	if(n<40){
		for(i=0;i<n;i++){
		for(j=1;j<=i+1;j++){
			m=m*j;
		}
		x[i]=m;
		m=1;
	}
	for(i=0;i<n;i++){
		e=e+1.0/x[i];
	}
	printf("%.14f",e);
	}
	else
		printf("2.71828182845905");
	
	return 0;
}