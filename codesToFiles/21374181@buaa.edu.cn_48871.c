"""
2022-03-28 18:39:32
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1724 KB
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 3 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
    long long x=1;
    double ans=1.0;
	scanf("%d",&n);
	if(n>17)
	n=17;
	for(i=1;i<=n;i++)
	{
		x*=i;
		ans+=1.0/x;
	}
	printf("%.14lf\n",ans);
}