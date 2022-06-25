"""
2022-03-26 17:03:19
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1624 KB

"""

#include<stdio.h>
int main() {
	int n;
	double e=1,sum=1;
	scanf("%d",&n);
	if(n<19) {
		for(int i=1; i<n+1; i++) {
			sum=sum*i;
			e=e+1/sum;
		}
	}
	if(n>=19) {
		for(int i=1; i<20; i++) {
			sum=sum*i;
			e=e+1/sum;
		}
	}
	printf("%.14lf",e);
	return 0;
}