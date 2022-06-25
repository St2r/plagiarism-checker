"""
2022-03-26 09:20:55
AC
1.0
Accepted | 1 * (1 / 4) | 6 ms | 1672 KB
Accepted | 1 * (1 / 4) | 3 ms | 1660 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 3 ms | 1660 KB

"""

#include <stdio.h>
#define LL long long

int main(){
	LL n;
	scanf("%lld",&n);
	double ans = 1;
	double a = 1;
	for(int i=1;i<=n;i++){
		a /= i;
		if(a<1e-15){
			break;
		}
		ans+=a;
	}
	printf("%.14f\n",ans);
	return 0;
}