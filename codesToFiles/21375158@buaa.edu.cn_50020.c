"""
2022-03-26 21:53:29
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
int main(){
	int n,i,j;
	double e=1,m=1;
	scanf("%d",&n);
	if(n<=20){
	for(i=1;i<=n;i++){
		m=1;
		for(j=1;j<=i;j++){
			m=m*j;
			
		}
		e=e+1/m;
	
	}
	printf("%.14lf",e);}
	else{printf("2.71828182845905");}
	
}