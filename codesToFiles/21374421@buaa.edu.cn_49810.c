"""
2022-03-28 22:13:27
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	double sum=1.0;
	double a=1.0;
	for(i=1;i<=n&&i<=32;i++){ 
		a*=i;
		sum+=1.0/a;
	}
	printf("%.14f",sum);
	return 0;
}