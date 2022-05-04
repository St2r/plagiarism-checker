"""
2022-03-26 20:40:17
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 3 ms | 1552 KB

"""

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,m=0;
	int i,j;
	int a[n];
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++) {
		m=0;
		for(j=1; j<a[i]; j++) {
			if(a[i]%j==0) {
				m=m+j;
			}
		}
		if (m==a[i])
			printf("YES\n");
		else printf("NO\n");
	}

	return 0;

}