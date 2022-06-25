"""
2022-03-29 22:58:40
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1636 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
int main(){
	double e=1,n,i,s=1;
	scanf("%lf",&n);
	for(i=1;i<=n;i++){
		s=s*i;
		e=e+1/s;
		if(i/s<1e-14)
		break;
	}printf("%.14f",e);
	return 0;
}