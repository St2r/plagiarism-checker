"""
2022-03-27 15:57:42
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 3 ms | 1636 KB
Accepted | 1 * (60 / 100) | 5 ms | 1712 KB

"""

#include<stdio.h>
int n,x,ans,as[110];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x);ans=0;
		for(int i=1;i<x;i++)if(x%i==0)ans+=i;
		if(ans==x)printf("YES\n");
		else printf("NO\n");
	}
}