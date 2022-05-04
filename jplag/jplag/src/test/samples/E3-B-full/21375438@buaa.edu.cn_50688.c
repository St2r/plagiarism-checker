"""
2022-03-26 11:35:34
AC
1.0
Accepted | 1 * (5 / 100) | 15 ms | 1616 KB
Accepted | 1 * (35 / 100) | 14 ms | 1616 KB
Accepted | 1 * (60 / 100) | 13 ms | 1600 KB

"""

#include <stdio.h>

int main()
{
	int n,i,j,a,sum=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		sum=0;
		scanf("%d",&a);
		for (j=1;j<=a/2;j++) {
			if (a%j==0) {
				sum+=j;
			}
		}
		if (a==sum) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	
	return 0;
}