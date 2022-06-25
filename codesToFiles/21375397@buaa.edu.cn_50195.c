"""
2022-03-27 20:53:16
AC
1.0
Accepted | 1 * (1 / 3) | 6 ms | 1544 KB
Accepted | 1 * (1 / 3) | 3 ms | 1544 KB
Accepted | 1 * (1 / 3) | 2 ms | 1632 KB

"""

#include <stdio.h> 

int main()
{
	int n,a,i;
	double e;
    scanf("%d",&n);
    i=1;
    e=1;
    a=1;
    while((i<=n)&&(i<=16)) 
    {
    	a=a*i;
    	e=e+1.0/a;
    	i++;
	}
	printf("%.14f",e);
    return 0;
}