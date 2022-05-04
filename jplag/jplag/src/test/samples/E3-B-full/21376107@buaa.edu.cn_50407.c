"""
2022-03-28 21:24:05
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1744 KB
Accepted | 1 * (35 / 100) | 1 ms | 1584 KB
Accepted | 1 * (60 / 100) | 2 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int n,a[105],i,j,k,ans[105],c,b;
	scanf("%d",&n);
	c=0;
	for (i=0;i<n;i++){
	scanf("%d",&a[i]);
	ans[i]=0;
	b=a[i]/2;
	for (k=1;k<=b;k++){
	if (a[i]%k==0)
	ans[i]+=k;
	}
	}
	for (i=0;i<n;i++){
	if (a[i]==ans[i])
	printf("YES\n");
	else printf("NO\n");}
	return 0;
}