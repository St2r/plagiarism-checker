"""
2022-03-27 11:53:47
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1684 KB
Accepted | 1 * (4 / 10) | 2 ms | 1684 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double e,k=1.0,i=1.0;
	scanf("%d",&n);
	if(n>25){
		n=25;
	}
	e=1.0;
	while(i<n+1){
		k*=i;
		e+=1/k;
		i++;
	}
	printf("%.14f",e);
	
    return 0;
}