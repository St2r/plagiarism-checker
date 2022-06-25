"""
2022-03-27 15:54:51
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1576 KB
Accepted | 1 * (1 / 4) | 2 ms | 1704 KB
Accepted | 1 * (1 / 4) | 3 ms | 1708 KB
Accepted | 1 * (1 / 4) | 4 ms | 1708 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double a=1,e=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int k=i;k<=i;k++){
			a*=1/(double)k;
			e+=a;
		}
	}
	printf("%.14lf",e+1);
	return 0;
}