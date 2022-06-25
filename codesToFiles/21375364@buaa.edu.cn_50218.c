"""
2022-03-30 17:49:24
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1716 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	double e=1.,x=1.;
	scanf("%d",&n);
	if(n>19)
		n=19;
	for(i=1;i<=n;i++){
		x*=i;
		e+=1./x;
	}
	printf("%.14f",e);
	return 0;
}