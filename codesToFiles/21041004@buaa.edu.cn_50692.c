"""
2022-03-26 19:36:44
REP
0.0
Wrong Answer | 0 * (1 / 10) | 2 ms | 1636 KB
Wrong Answer | 0 * (1 / 10) | 2 ms | 1648 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1716 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1604 KB
Runtime Error (SIGFPE) | 0 * (4 / 10) | 259 ms | 1436 KB

"""

#include <stdio.h>
int main() 
{
	double num, sum = 0;
	int n, i, m;
    scanf("%d", &m);
    for(n = 1; n <= m; n++)
    {
        for(i=n-1;i>0;i--)
        {
            n=n*i;
        }
    	num = 1/(n);
	    sum += num;
	}
	printf("%.14f", &sum);
	return 0;
}