"""
2022-03-27 21:12:02
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	int i=0,cnt=1;
	long long x=1,n;
	scanf("%lld",&n);
	double sum=1,y;
	for(i=1;i<=n;i++){
		for(cnt=1;cnt<=i;cnt++){
			x=x*cnt;
			y=1.0/x;
		}
		sum=sum+y;
		x=1;
		if(y<0.0000000000000001){
			break;
		}
	}
	printf("%.14lf",sum);
	return 0;
}