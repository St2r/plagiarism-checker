"""
2022-03-28 22:26:44
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	long long n;
	double sum=1.0,y,x;
	scanf("%lld",&n);
	if(n<=20){
			for(int i=1;i<=n;i++){
				x=1;
				for(int j=1;j<=i;j++){
					x=x*j;
				}
				y=1/x;
				sum=sum+y;
			}
			printf("%.14lf",sum);
		}
	if(n>20){
		for(int i=1;i<=20;i++){
			x=1;
		for(int j=1;j<=i;j++){
			x=x*j;
			}
		y=1/x;
		sum=sum+y;
		}
		printf("%.14lf",sum);
		
	}
	
	return 0;
}