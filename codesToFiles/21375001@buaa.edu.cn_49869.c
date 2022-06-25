"""
2022-03-27 22:50:12
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1676 KB

"""

#include <stdio.h>
int main ()
{
	long long n=0;
	scanf("%lld",&n);
	
	double e;
	
	int i = 0;
  
    long long ret=1;

    for (i = 1; i <= n&&i<=20; i++)
    {
        ret=ret*i;
   
        e=e+1.0/ret;
    }
    printf("%.14lf",e+1);
    
    return 0;


}