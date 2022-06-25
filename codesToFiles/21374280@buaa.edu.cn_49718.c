"""
2022-03-28 21:43:06
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (4 / 10) | 1 ms | 1756 KB

"""

#include <stdio.h>
int main()
{
	long long n,k=1;
	double e=1;
	scanf("%lld",&n);
	if(n<=18){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			k*=j;
		   }
		e+=1.0/k;
		k=1;
	    }
	printf("%0.14lf",e);
    }
	else{
		for(int i=1;i<=18;i++){
		    for(int j=1;j<=i;j++){
			k*=j;
		   }
		e+=1.0/k;
		k=1;
	    }
	printf("%0.14lf",e);
	}
	return 0;
}