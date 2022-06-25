"""
2022-03-26 14:44:43
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 3 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include <stdio.h>
int main()
{
	int n,x[100],i;
	double a=1,s=1;
	scanf("%d",&n);
	for(i=1;i<=n&&i<=50;i++){
		a=a*1/i;
		s+=a;
	}
	printf("%.14f",s);
	return 0;
}