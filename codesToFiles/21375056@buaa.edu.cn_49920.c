"""
2022-03-26 12:34:44
AC
1.0
Accepted | 1 * (1 / 7) | 8 ms | 1684 KB
Accepted | 1 * (1 / 7) | 11 ms | 1600 KB
Accepted | 1 * (1 / 7) | 7 ms | 1576 KB
Accepted | 1 * (1 / 7) | 2 ms | 1588 KB
Accepted | 1 * (1 / 7) | 2 ms | 1640 KB
Accepted | 1 * (1 / 7) | 2 ms | 1708 KB
Accepted | 1 * (1 / 7) | 2 ms | 1644 KB
6 KB

"""

#include<stdio.h>
int main(){
	double n, a=1, i=1, b=1;
	scanf("%lf",&n);
	if(n<=17){
	while(i<=n){
		b=b*i;
		a=a+1/b;
		i++;
		}
		printf("%.14f",a);
	}else{
		printf("2.71828182845905");
	}

	return 0;
}