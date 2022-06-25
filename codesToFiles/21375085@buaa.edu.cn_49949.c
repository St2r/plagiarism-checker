"""
2022-03-26 15:24:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1672 KB

"""

#include<stdio.h>
int main(){
	double en=1,x=1;
	long long n;
	int i;
	scanf("%lld",&n);
	if(n==1){
	printf("%.14f",en);
	}
	else{
	
	for(i=1;(i<=n)&&(i<=19);i++){
		x=(double) x/i;
		en+=x;		
	}
	printf("%.14f",en);
}
	return 0;
	}