"""
2022-03-28 20:42:05
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (1 / 10) | 0 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 0 ms | 1744 KB

"""

#include<stdio.h>

int main(){
	int n,i;
	long long j=1; 
	double e=1;
	scanf("%d",&n);
	if(n>30){
		n=30;
	}
	for(i=1;i<=n;i++){
		j=j*i;
		e=e+(1.0)/j;
	}
	printf("%.14f",e);
	return 0;
}