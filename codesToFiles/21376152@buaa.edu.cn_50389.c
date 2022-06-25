"""
2022-03-29 23:29:19
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1652 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double ans,r;
	ans=1.0;
scanf("%d",&n);
if(n>=18)
printf("2.71828182845905");
else{
for(i=1; i<=n; i++) {
for(r=j=1; j<=i; j++)
r *= j; 
ans += 1.0/r;
}
printf("%.14f",ans);
}
return 0;
}