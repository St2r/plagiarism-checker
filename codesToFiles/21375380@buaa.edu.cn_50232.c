"""
2022-03-26 14:34:22
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1632 KB

"""

#include<stdio.h>
int main()
{
	int i;
	double b=1,a=1,n;
	scanf("%lf",&n);
	for(i=1;i<=n;i++){
		a=a*i;
		b=b+1/a;
		if(i==17){
			break;
		}
	}
	printf("%.14lf",b);
	return 0;
}