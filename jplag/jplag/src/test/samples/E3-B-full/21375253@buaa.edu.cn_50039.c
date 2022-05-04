"""
2022-03-26 18:40:00
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1712 KB

"""

#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j,sum=0;
	int k=0;
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	for(j=0; j<n; j++) {
		sum=0;
		for(k=1; k<a[j]; k++) {
			if(a[j]%k==0) {
				sum+=k;
			}
		}
		if(sum==a[j]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}