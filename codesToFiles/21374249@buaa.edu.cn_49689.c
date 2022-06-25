"""
2022-03-28 18:08:29
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1720 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 11 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (4 / 10) | 11 ms | 1656 KB

"""

#include<stdio.h>
int main() {
	int n, i = 1;
	double num1 = 1.0000000,num2, sum;
	scanf("%d",&n);
	while(i <= n && i <= 18){
		num1 = num1 * i;
		num2 = 1 / num1;
		sum =  sum + num2;
		i++;
	}
	sum += 1;
	printf("%.14lf", sum);
	return 0;
}