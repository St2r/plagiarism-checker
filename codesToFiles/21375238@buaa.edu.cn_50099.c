"""
2022-03-26 08:21:20
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1720 KB
Accepted | 1 * (1 / 4) | 3 ms | 1660 KB
Accepted | 1 * (1 / 4) | 3 ms | 1612 KB
Accepted | 1 * (1 / 4) | 3 ms | 1652 KB
 KB

"""

#include <stdio.h>
int fact(int n)
	{
		int i = 1;
		int r;
		r = 1;
		for(i=1;i<=n;i++){
			r *= i;
		}
		return r;
	}
int main() {

	int n,i;
	
	double sum = 1,eps=1E-14,xn;
	
	scanf("%d",&n);
	
	xn = 1.0/fact(n);
	
	for(i=1;i<=n&&xn>eps;i++){
		sum += 1.0/fact(i);
	}
	
	printf("%.14f",sum);
	

	

    
    
	return 0;
}