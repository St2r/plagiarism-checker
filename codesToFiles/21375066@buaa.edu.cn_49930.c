"""
2022-03-29 13:06:08
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1636 KB
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1628 KB

"""

#include<stdio.h>
#include<stdlib.h>
double fact(int n){
	double a=1,i;
	for(i=1;i<=n;i++){
		a *=i;
	}
	return a;
}
int main(){
	int i,n;
	double e=0.0;
	scanf("%d",&n);
	if(n<=16){
	
	for(i=0;i<=n;i++){
		e=e+(1.0/fact(i));
	}
		printf("%.14lf",e);
	}else{
		printf("2.71828182845905");
	}
	
	return 0;
}