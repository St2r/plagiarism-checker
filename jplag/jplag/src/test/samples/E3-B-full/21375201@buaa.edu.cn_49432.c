"""
2022-03-26 15:06:31
AC
1.0
Accepted | 1 * (5 / 100) | 15 ms | 1692 KB
Accepted | 1 * (35 / 100) | 3 ms | 1556 KB
Accepted | 1 * (60 / 100) | 14 ms | 1556 KB

"""

#include<stdio.h>
int main() {
	int n,a[n],x,y,m,i,factor=1,plus=0;
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);

	}
	for(i=0; i<n; i++) {
		for(m=0; m<a[i]; m++) {

			if(a[i]%factor==0) {
				plus=plus+factor;
				factor=factor+1;
			} else {
				factor=factor+1;
			}
		}
		if(a[i]==plus) {
			printf("YES\n");
		} else
			printf("NO\n");

	}
	return 0;
}