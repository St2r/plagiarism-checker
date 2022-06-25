"""
2022-03-27 16:54:54
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1604 KB
Accepted | 1 * (1 / 10) | 3 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 10 ms | 1628 KB
Accepted | 1 * (4 / 10) | 2 ms | 1596 KB

"""

#include<stdio.h>
int n;long long x=1;
double ans=1.0;
int main()
{
	scanf("%d",&n);
	if(n>17)n=17;
	for(int i=1;i<=n;i++)
	{
		x*=i;
		ans+=1.0/x;
	}
	printf("%.14lf\n",ans);
}