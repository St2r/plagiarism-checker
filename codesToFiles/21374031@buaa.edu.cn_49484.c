"""
2022-03-27 17:56:42
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1568 KB
Accepted | 1 * (1 / 4) | 2 ms | 1628 KB
Accepted | 1 * (1 / 4) | 2 ms | 1544 KB
Accepted | 1 * (1 / 4) | 2 ms | 1572 KB
KB

"""

#include <stdio.h>

int main(){
	
	int n, i, b=1;
	double a=1;
	scanf("%d",&n);
	if(n>25)
		n=25;
	for(i=1;i<=n;i++){
		b*=i;
		a+=(1.0/b);
		
	}
	printf("%.14f",a);
	return 0;
}