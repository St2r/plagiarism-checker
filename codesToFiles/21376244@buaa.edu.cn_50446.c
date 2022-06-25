"""
2022-03-27 17:53:10
AC
1.0
Accepted | 1 * (1 / 5) | 7 ms | 2448 KB
Accepted | 1 * (1 / 5) | 3 ms | 2392 KB
Accepted | 1 * (1 / 5) | 3 ms | 2436 KB
Accepted | 1 * (1 / 5) | 5 ms | 2252 KB
Accepted | 1 * (1 / 5) | 3 ms | 2444 KB

"""

#include <stdio.h>
int main ()
{
	long long int n,i;
	double mig;
	scanf("%lld",&n);
	if(n>=18)
	n=17;
	long long int x[n];
	x[0]=1;
    for(i=1;i<=n;i++){
    	x[i]=x[i-1]*i;
	}
	mig=0;
    for(i=0;i<=n;i++){
		mig=mig+1.0/x[i];
	}
	printf("%.14lf",mig);
	
	return 0;
}