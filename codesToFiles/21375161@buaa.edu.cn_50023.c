"""
2022-03-27 21:20:47
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	double e=1.0;
	int n,i;
	long long k=1;
	scanf("%d",&n);
	if(n>=50) n=50;
	for(i=1;i<=n;i++){
		k=k*i;
		e=e+1.0/k;
	}
	printf("%.14f",e);
	return 0;
}