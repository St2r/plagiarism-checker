"""
2022-03-26 15:30:13
AC
1.0
Accepted | 1 * (1 / 10) | 5 ms | 1696 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 3 ms | 1656 KB
Accepted | 1 * (4 / 10) | 4 ms | 1560 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main() {
	long long a,n,i,j,k=0;
	double e=1.0,times=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	if(i>19)
	break;
	times*=i;
	e=e+1.0/times;
	
	}
    printf("%.14f",e);
	return 0;
}