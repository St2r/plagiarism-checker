"""
2022-03-26 21:37:11
AC
1.0
Accepted | 1 * (1 / 4) | 7 ms | 1664 KB
Accepted | 1 * (1 / 4) | 3 ms | 1648 KB
Accepted | 1 * (1 / 4) | 2 ms | 1696 KB
Accepted | 1 * (1 / 4) | 3 ms | 1696 KB

"""

#include <stdio.h>

int main()
{
	long long i,n;
	double sum = 1.0,t = 1.0;
	scanf("%lld", &n);
	if(i>16){
		n = 16;
	}
	for(i=1;i<=n;i++){
		t = t/i;
		sum = t + sum;
	}
	printf("%.14f", sum);
	
	return 0;

}