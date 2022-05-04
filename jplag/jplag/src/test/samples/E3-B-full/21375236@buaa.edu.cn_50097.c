"""
2022-03-26 16:17:15
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>
int main() {
	int sum, i, k, n, a[105];
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		scanf("%d", &a[i]);
	sum=0;
	for(k=1; k<a[i]; k++) {
		
		if(a[i] % k==0)
		sum=k+sum;
	}
	if(sum==a[i])
		printf("YES\n");
	else
		printf("NO\n");
}
	return 0;
}