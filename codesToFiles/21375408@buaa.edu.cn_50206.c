"""
2022-03-29 23:56:32
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 0 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double sum=1.0,a=1.0;
	int i;
	scanf("%d", &n);
	if(n>=35) n=35;
	for(i=1;i<=n;i++)
	{
		a*=1.0/i;
		sum+=a;
	}
	
	printf("%.14f",sum);
	return 0;
}