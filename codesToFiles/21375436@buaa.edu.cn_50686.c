"""
2022-03-27 13:29:08
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1712 KB
Accepted | 1 * (35 / 100) | 10 ms | 1636 KB
Accepted | 1 * (60 / 100) | 4 ms | 1664 KB

"""

#include<stdio.h>
int main ()
{
	int i = 1;
    double n, num = 1, a = 1;
	scanf("%lf", &n);
	if(n < 16){
		for(; i <= n; i++)
	{
		a = a * (1.0 / i);
		num = num + a;
	}
	printf("%.14lf", num);
	}
	else{
	
	for(; i <= 20; i++)
	{
		a = a * (1.0 / i);
		num = num + a;
	}
	printf("%.14lf", num);
}
	return 0;	
	
}