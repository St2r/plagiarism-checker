"""
2022-03-29 19:00:41
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (4 / 10) | 3 ms | 1612 KB

"""

#include<stdio.h>
int main()
{
	double a, n,i;
	double e;
	e = 1, a = 1;
	scanf("%lf", &n);
	if(n<=17){
	
	for( i = 1; i <= n; i ++)
	{
	
		
			a = a * i;
		
		e = e + 1.0/a;
	}
}
else{
	for( i = 1; i <= 17; i ++)
	{
	
		
			a = a * i;
		
		e = e + 1.0/a;
}
}
	printf("%.14lf", e);
	return 0;
}