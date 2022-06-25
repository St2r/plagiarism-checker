"""
2022-03-28 18:46:26
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 3 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include<stdio.h>
#include<math.h>
#define eps 1e-15
int a[1100];
int main() 
{
    int n;
    scanf("%d",&n);
    double e=1.0;
    int i;
    double a=1.0;
    for(i=1;i<=n;i++)
    {
    	a*=i;
    	e+=1.0/a;
		if(eps>(1.0/a)) break;
	}
	printf("%.14lf",e);
	
    return 0;
}