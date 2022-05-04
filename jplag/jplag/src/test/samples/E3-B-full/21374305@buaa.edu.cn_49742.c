"""
2022-03-26 12:01:21
AC
1.0
Accepted | 1 * (5 / 100) | 14 ms | 1632 KB
Accepted | 1 * (35 / 100) | 14 ms | 1660 KB
Accepted | 1 * (60 / 100) | 2 ms | 1512 KB

"""

#include<stdio.h>
int main()
{
	int n,a[101];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int j=0;j<n;j++){
		if(a[j]==6||a[j]==28||a[j]==496||a[j]==8128) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}