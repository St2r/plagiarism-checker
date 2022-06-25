"""
2022-03-26 12:25:39
AC
1.0
Accepted | 1 * (1 / 4) | 4 ms | 1600 KB
Accepted | 1 * (1 / 4) | 4 ms | 1684 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 11 ms | 1712 KB

"""

#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	double sum=1;
	double p=1;
	if (n<=1) {
		printf("%.14f\n",sum);
	
	} else if(n>=17) {
		printf("2.71828182845905\n");
	} else {

		for ( int i=1; i<n+1; i++) {
			p=p*i;
			sum=sum+1.0/p;
		}
		printf("%.14f\n",sum);
	}

	return 0;
}