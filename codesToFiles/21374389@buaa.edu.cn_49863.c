"""
2022-03-29 16:44:51
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include<stdio.h>
double total(unsigned long n);
int n;
int main(){
	unsigned long i;
	double sum=1.0;
	scanf("%lu",&n);
	if(n<20){
	
	for(i=1;i<=n;i++){
		sum=1.0*sum+1.0*(1/total(i));
	}
	printf("%.14lf",sum);
	}
	else printf("2.71828182845905");
	return 0;
} 
double total(unsigned long n){
if(n==1)
	return 1;
return n*total(n-1);
}