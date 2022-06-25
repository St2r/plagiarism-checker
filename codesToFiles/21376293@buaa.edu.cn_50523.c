"""
2022-03-27 20:06:11
PE
0.0
Presentation Error | 0 * (3 / 5) | 4 ms | 1604 KB
Presentation Error | 0 * (1 / 5) | 7 ms | 1472 KB
Presentation Error | 0 * (1 / 5) | 3 ms | 1632 KB
KB
Wrong Answer | 0 * (1 / 8) | 2 ms | 1636 KB
Runtime Error (SIGSEGV) | 0 * (1 / 8) | 251 ms | 1436 KB
Runtime Error (SIGSEGV) | 0 * (1 / 8) | 267 ms | 1284 KB
Runtime Error (SIGSEGV) | 0 * (1 / 8) | 245 ms | 1284 KB
Runtime Error (SIGSEGV) | 0 * (1 / 8) | 251 ms | 1416 KB

"""

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double ans=1,x=1;
	for(double i=1;i<=n;i++){
		x*=i;
		ans+=(1/x);
	}
	printf("%.14f",ans);
	return 0;
}