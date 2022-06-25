"""
2022-03-26 09:16:16
AC
1.0
Accepted | 1 * (5 / 100) | 17 ms | 1560 KB
Accepted | 1 * (35 / 100) | 21 ms | 1612 KB
Accepted | 1 * (60 / 100) | 13 ms | 1576 KB

"""

#include <stdio.h>

int main()
{
	int n,i,r;
	double sum;
	scanf("%d",&n);
	for(r=i=1;i<=n;i++){
		r*=i;
		sum+=1.0*1/r;
	}
	printf("%.14f",sum+1);
	return 0;
 }