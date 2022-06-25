"""
2022-03-27 15:16:17
AC
1.0
Accepted | 1.0 * (3 / 15) | 2 ms | 1552 KB
Accepted | 1.0 * (2 / 15) | 9 ms | 1696 KB
Accepted | 1.0 * (4 / 15) | 2 ms | 1552 KB
Accepted | 1.0 * (1 / 15) | 3 ms | 1616 KB
Accepted | 1.0 * (5 / 15) | 2 ms | 1704 KB
B

"""

#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	long long jieji=1;
	double sum=1;
	for(i=1;i<=n;i++){
		jieji=jieji*i;
		sum=sum+1.0/jieji;
	}
	printf("%.14f",sum);
	return 0;
}