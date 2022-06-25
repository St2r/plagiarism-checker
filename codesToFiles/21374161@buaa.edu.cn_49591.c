"""
2022-03-27 19:30:45
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (2 / 10) | 2 ms | 1544 KB
Accepted | 1 * (4 / 10) | 2 ms | 1628 KB

"""

#include <string.h>
#include <stdlib.h>
#include <math.h> 
#include <stdio.h>
int main()
{
	unsigned long long n,qlbh=1;
	double e=1;
	scanf("%lld",&n);
	if(n<20){
	for(int i=1;i<=n;i++){
		for(int j=2;j<=i;j++){
			qlbh*=j;
			}
		e+=1.0/qlbh;
		qlbh=1;
	}
	printf("%.14f",e);}
	else
	{printf("2.71828182845905");
	}
	return 0;
}