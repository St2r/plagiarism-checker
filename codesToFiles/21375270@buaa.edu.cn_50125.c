"""
2022-03-29 22:42:35
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 0 ms | 1752 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include <stdio.h>
double e=1,b;
double eibo(int n)
{
	if(n==1)
		return 1;
	else 
		b=(eibo(n-1))/n;
		return b;
	}
int main() {
	int n,i;
	scanf("%d",&n);
	if(n>=18){
		n=17;
	}
	for(i=1;i<=n;i++){
		e=e+eibo(i);
	}
	printf("%.14f",e);
	
	return 0;
}