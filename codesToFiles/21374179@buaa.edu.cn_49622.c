"""
2022-03-28 23:27:01
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include <stdio.h>

int main()
{
	double n;
	double i,num=1.0,sum=1.0;
	scanf("%lf",&n);
	for(i=1;i<=n;i++){
		num=num*i;   
	    sum=sum+1/num;
	if((1/num)<1e-14)
	break;
	}
	printf("%.14lf",sum);
	return 0;
}