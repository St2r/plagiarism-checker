"""
2022-03-29 12:07:41
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1692 KB
Accepted | 1 * (2 / 10) | 0 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1664 KB

"""

#include<stdio.h>
#include<string.h>
#include<math.h>
int main() 
{
    int n;
    double i=1,j=1;
    scanf("%d",&n);
   	for(int k=1;k<=n;k++)
	    {
	    j*=k;
	    i+=(1/j);
	    if((1/j)<1e-14)
	    break;
	    }
	printf("%.14f",i);
    return 0;
}