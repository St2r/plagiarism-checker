"""
2022-03-27 13:35:37
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1668 KB
Accepted | 1 * (1 / 4) | 2 ms | 1624 KB
Accepted | 1 * (1 / 4) | 6 ms | 1712 KB
Accepted | 1 * (1 / 4) | 2 ms | 1704 KB


"""

#include <stdio.h>
int main()
{
	long long n,sum=1;
	double e=1;
	scanf("%lld",&n);
	if(n>=40){
		printf("2.71828182845905\n");
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=2;j<=i;j++){
			sum*=j;
			
		}
		
		e+=1.0/sum;
		sum=1;
	}
	printf("%.14f",e);
	return 0;
}