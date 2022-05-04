"""
2022-03-29 23:12:16
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1628 KB
Accepted | 1 * (35 / 100) | 1 ms | 1728 KB
Accepted | 1 * (60 / 100) | 2 ms | 1740 KB

"""

#include<stdio.h>
int main() {
	int n,x,b=0,i,j;
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		scanf("%d",&x);
		int sum=0;
		for(j=1; j<=x/2; j++)
			if(x%j==0)sum+=j;
		if(sum==x)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}