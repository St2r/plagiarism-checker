"""
2022-03-29 11:06:47
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 0 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1748 KB

"""

#include <stdio.h>
int main() {
	int i, n;
	long long r;
    double num=1.0;
	scanf("%d", &n);
    if(n<18)
    {
	    for (r = i = 1; i <= n; i++)
	    {
		    r *= i; 
		    num+=1.0/r;
	    }
    }
    else
    {
        for (r = i = 1; i <= 18; i++)
	    {
		    r *= i; 
		    num+=1.0/r;
	    }
    }
    printf("%.14lf",num);

	return 0;
}