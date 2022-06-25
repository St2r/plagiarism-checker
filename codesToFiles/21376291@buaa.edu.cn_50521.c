"""
2022-03-26 16:38:58
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1552 KB
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1552 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1624 KB

"""

#include <stdio.h>

int main(){
	int i,n;
	double a0,a1,sum;
	a0=1.0;
	sum=1.0;
	
	scanf("%d",&n);
	if(n>18){
		n=18;
	}
	for(i=1;i<=n;i++){
		a1=a0/i;
		a0=a1;
		sum+=a1;	
	}
	printf("%.14f",sum);
}