"""
2022-03-29 23:23:32
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include<stdio.h>
int main() {
	double sum,r,n,j;
	scanf("%lf",&n);
	sum=1.0;
	r=1.0;
	if(n>19){
		for(j=1;j<=19;j++){
			r=r/j;
			sum=sum+r;
		}
	}
	else{
		for(j=1;j<=n;j++){
			r=r/j;
			sum=sum+r;
		}
	}
	printf("%.14f",sum);
	return 0;
}