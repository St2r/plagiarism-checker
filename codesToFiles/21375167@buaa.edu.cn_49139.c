"""
2022-03-29 23:13:49
WA
0.6
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Wrong Answer | 0 * (4 / 10) | 1 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	long long n,y=1,i;
	double x[99],e=0;
	scanf("%lld",&n);
	if(n<=16){
	for(i=1;i<=n;i++){
		x[i] = 1.0;
		for(y=1;y<=i;y++){		
		x[i] *= y;
	}
		e += (1.0/(x[i]));
	}
	printf("%.14lf",e+1);
}else{
	for(i=1;i<=16;i++){
		x[i] = 1.0;
		for(y=1;y<=i;y++){		
		x[i] *= y;
	}
		e += (1.0/(x[i]));
	}
	printf("%.14lf",e+1);
}
	return 0;
}