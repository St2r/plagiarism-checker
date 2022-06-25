"""
2022-03-28 23:42:18
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 0 ms | 1756 KB

"""

#include <stdio.h>

int main()
{
	long long int n,i,j=1;
	double r,sum=1.0;
	
	scanf("%lld", &n);
	
	for(i=1;i<=n;i++){
		j*=i;
		r=1.0/j;
		sum+=r;
		if(i>45){
			break;
		} 
	}
	
	printf("%.14lf", sum);
	return 0;
}