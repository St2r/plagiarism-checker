"""
2022-03-29 23:18:05
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (4 / 10) | 1 ms | 1676 KB

"""

#include<stdio.h>
#include<math.h>
#define eps 1e-8
int main()
{
	long long p,i;
	double e=1.0,sum=1.0,q;	
	scanf("%lld",&p);
	if(p>=30) p=20;
	for(i=1;i<=p;i++){
		for(q=1.0;q<=i;q++){
			sum=sum*1.0/q;
		}
		e=e+sum;
		sum=1.0;
	}
	printf("%.14f",e);
	return 0;
}