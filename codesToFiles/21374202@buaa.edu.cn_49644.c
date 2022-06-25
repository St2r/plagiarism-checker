"""
2022-03-28 22:51:55
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1696 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main(){
	int n,i=1 ;
	double e=1,s=1;
	scanf("%d",&n);
	while(i<=n && i<=17)
	{
		s=s*i;
		e=e+1/s;
		i=i+1;
			
	}
	printf("%.14lf",e);

	return 0;

	
}