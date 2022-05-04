"""
2022-03-29 16:35:23
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 2 ms | 1680 KB

"""

#include <stdio.h>
int main () {
	int n,a[100],i,j,k,ans;
	scanf ("%d",&n);
	for (i=0; i<n; i++) {
		scanf ("%d",&a[i]);
		ans=0;
		for (j=1; j<a[i]; j++) {
			if (a[i]%j==0)
				ans=ans+j;
		}
		if (ans==a[i])
			printf ("YES\n");
		if (ans!=a[i])
			printf ("NO\n");
	}
}