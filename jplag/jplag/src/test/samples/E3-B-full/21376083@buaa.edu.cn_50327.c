"""
2022-03-26 12:37:24
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 11 ms | 1652 KB
Accepted | 1 * (60 / 100) | 7 ms | 1552 KB

"""

#include <stdio.h>
int t,n,sum;
int main()
{
	scanf("%d",&t);
	while (t)
	{
		t--;
		scanf("%d",&n);
		sum=0;
		for (int i=1;i<=n-1;++i)
			if(n%i==0)sum+=i;
		if(sum==n)printf("YES\n");
		else printf("NO\n");
	}
}