"""
2022-03-26 16:20:56
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1700 KB
Accepted | 1 * (1 / 4) | 9 ms | 1656 KB
Accepted | 1 * (1 / 4) | 13 ms | 1552 KB
Accepted | 1 * (1 / 4) | 9 ms | 1632 KB


"""

#include <stdio.h>
int main() {
	int a[1000];
	int n, i, j, k, m=0;
	scanf("%d",&n);
	for(i=0; i<30; i++) {
		scanf("%d",&a[i]);}
	for(j=0; j<n; j++) {
		for(k=j+1; k<n; k++) {
			if(a[j]>a[k]) {
				m++;
			}
		}
	}
	printf("%d",m);
	return 0;
}