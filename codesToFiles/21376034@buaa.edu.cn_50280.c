"""
2022-03-26 13:21:55
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 3 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	double e=1.0;
	double t=1.0;
	for(int i=1;i<=n;i++){
		t=t*i;
		e=e+1.0/(1.0*t);
		if(i>20)break;
	}
	printf("%.14lf",e);
	return 0;
 }