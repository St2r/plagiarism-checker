"""
2022-03-28 23:37:26
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 2 ms | 1784 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int n;
	int a[10002];
	int sum[10002]={0};
	scanf("%d",&n);
	for(int i = 0;i<n;i++) {
		scanf("%d",&a[i]);
		for(int k = 1;k<a[i];) {
			if(a[i]==a[i]/k*k) sum[i]+=k;
			k++;
		}
		if(sum[i]==a[i]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}