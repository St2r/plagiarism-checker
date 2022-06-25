"""
2022-03-29 21:14:47
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1756 KB
Accepted | 1 * (4 / 10) | 1 ms | 1756 KB

"""

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int n,i;
	scanf("%d",&n);
	double e=0,a=1;
	for(i=0;i<=n;i++){
		e+=1.0/a;
		a*=(i+1);
		if(i>=30)
		   break;
		
	}
	printf("%.14lf",e);
	return 0;
}