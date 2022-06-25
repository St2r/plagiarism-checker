"""
2022-03-26 13:14:23
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1688 KB
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1724 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include <stdio.h>
int n;
double s=1;
int main(void){
	scanf("%d",&n);
	int i;
	double r,j;
	if(n<=17){
		for(r=i=1; i<=n; i++){
		r *= i; 
		s+=1.0/r;
		}
	}else{
		printf("2.71828182845905");
		return 0;
	}
	printf("%.14lf",s);
	return 0;
}