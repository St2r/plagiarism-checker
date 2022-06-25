"""
2022-03-26 13:03:04
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1644 KB
Accepted | 1 * (4 / 10) | 2 ms | 1640 KB

"""

#include <stdio.h>

int main()
{   
	unsigned long long i, t=1, n;
	double e=0;
	scanf("%llu",&n);
	if(n<=17){
	
		for(i=1;i<=n+1;i++){
		e+=1.0/t;
		t*=i;
	}
	}else{
		n=17;
		for(i=1;i<=n+1;i++){
		e+=1.0/t;
		t*=i;
	}
	}

	printf("%.14lf\n",e);
	
	return 0;
}