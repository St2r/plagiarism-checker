"""
2022-03-26 12:13:15
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1640 KB
Accepted | 1 * (1 / 4) | 2 ms | 1628 KB
Accepted | 1 * (1 / 4) | 2 ms | 1688 KB
Accepted | 1 * (1 / 4) | 2 ms | 1704 KB

"""

#include <stdio.h>

int main() {
	unsigned int n;
	scanf("%u",&n);
	int i, j;
	double s, ans=1;
	if(n<17) {
		for(i=1; i<=n; i++) {
			long long int x=1;
			for(j=1; j<=i; j++) {
				x = x*j;
				s = 1.0/x;
			}
			ans = ans + s;
		}
	}
	else{
		ans=2.71828182845905;
	}
	printf("%.14f\n",ans);
	return 0;
}