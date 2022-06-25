"""
2022-03-29 23:28:45
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 0 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include <stdio.h> 
int main() 
{ 
	int n; 
	scanf("%d",&n);
	double s=1.0;
	int i=1;
    double a=1.0;
    while((i<=n)&&(i<20))
	{ 
	a=a/i; s=s+a; i++; 
	} 
	printf("%.14lf",s);

 	return 0; 
 }