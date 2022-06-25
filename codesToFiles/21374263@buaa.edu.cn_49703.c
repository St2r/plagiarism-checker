"""
2022-03-28 19:27:21
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1700 KB
Accepted | 1 * (1 / 10) | 11 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 15 ms | 1652 KB
Accepted | 1 * (4 / 10) | 14 ms | 1632 KB

"""

#include <stdio.h>

int main()
{
	double n,e=1,i,u=1;
	scanf("%lf",&n);
	
	if(n>18)
		n=18;
	for(i=1;i<=n;i++){
		u*=i;	
		e+=1/u;
	}
	
	printf("%.14f",e);

	return 0;	
}