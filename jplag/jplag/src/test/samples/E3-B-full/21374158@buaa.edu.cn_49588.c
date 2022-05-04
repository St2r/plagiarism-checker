"""
2022-03-29 19:47:15
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1572 KB
Accepted | 1 * (35 / 100) | 1 ms | 1576 KB
Accepted | 1 * (60 / 100) | 2 ms | 1680 KB

"""

#include<stdio.h>
int sum[10000];
int main() {
	int n,i,j,m;
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++) {
		scanf("%d\n",&a[i]);
		for(j=1; j<=a[i]/2; j++) {
			m=a[i]%j;
			if(m==0) {
				sum[i]=sum[i]+j;
			}
		}
	}
	for(i=0; i<n; i++) {
		if(sum[i]==a[i]) {
			printf("YES\n");
		} else
			printf("NO\n");
	}
	return 0;
}