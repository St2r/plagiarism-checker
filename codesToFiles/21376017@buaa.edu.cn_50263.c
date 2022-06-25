"""
2022-03-26 10:54:51
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1588 KB
Accepted | 1 * (1 / 4) | 2 ms | 1596 KB
Accepted | 1 * (1 / 4) | 7 ms | 1592 KB
Accepted | 1 * (1 / 4) | 6 ms | 1596 KB

"""

#include<stdio.h>
double f(int x){
	double result,k=1.0;
	int i;
//if(x<100){
	for(i=1;i<=x;i++){
		k=k*i;
	}
	result=1/k;
//	}
//else result=2.71828182845905;
	return result;
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
	double e=1.0;
	if(n<17) for(i=1;i<=n;i++){
		e=e+f(i);
	}
	else e=2.71828182845905;
	printf("%.14f",e);
	return 0;
}