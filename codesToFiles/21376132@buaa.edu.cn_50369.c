"""
2022-03-27 10:09:30
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1700 KB

"""

#include<stdio.h>
#include<math.h>

int main() {
	int n, i;
	long long n1=1;//防止阶乘溢出（如果下方的i不加以限制，还是会很快溢出） 
	double e=1;
	scanf("%d",&n);
	for(i=0;i<n&&i<=20;i++){//这个级数收敛速度很快，20足以满足double的精度要求
		n1*=(i+1);
		e +=(1.0/n1);
	}
	printf("%.14lf",e);
	return 0;
}