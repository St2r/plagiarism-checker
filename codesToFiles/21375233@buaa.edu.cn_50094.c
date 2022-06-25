"""
2022-03-26 09:46:26
AC
1.0
Accepted | 1 * (1 / 10) | 15 ms | 1636 KB
Accepted | 1 * (1 / 10) | 14 ms | 1632 KB
Accepted | 1 * (2 / 10) | 10 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 15 ms | 1676 KB

"""

#include<stdio.h>

int main()
{
	double n, i, t ,e;
	t = 1;
	e = 1;
	scanf("%lf",&n);
	if(n > 18){
		n  = 18;
	}
	for(i = 1;i <= n;i++){
		t = t*i; 
		e += 1/t;
	}
	printf("%.14f",e);
}