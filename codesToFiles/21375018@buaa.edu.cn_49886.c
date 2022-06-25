"""
2022-03-29 23:06:55
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 0 ms | 1676 KB

"""

#include<stdio.h>
int main()
{
	double chen=1;
	int n,j;
	double e=1,s;
	scanf("%d",&n);
		for(j=1;j<=n;j++){
			chen=chen*j;
		s=1/chen;
		e=e+s;
			if(s<0.00000000000001)
		break;
}
	printf("%.14lf",e);
	return 0;
}