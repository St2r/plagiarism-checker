"""
2022-03-29 22:17:52
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (1 / 10) | 0 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 0 ms | 1748 KB

"""

#include <stdio.h>
int main()
{
	long long n,i,k;
	scanf("%lld",&n);
	double sum=1,a;
	for(i=1;i<=n;i++){
		for(k=i,a=1;k!=0;k--){
			a=a*k;
		}
		if(a>1e16)
		break;
		sum+=1/a;
	}
	printf("%.14lf",sum);
	return 0;
}