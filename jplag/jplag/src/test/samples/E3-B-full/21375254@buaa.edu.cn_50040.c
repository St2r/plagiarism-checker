"""
2022-03-28 19:19:36
AC
1.0
Accepted | 1 * (5 / 100) | 10 ms | 1680 KB
Accepted | 1 * (35 / 100) | 15 ms | 1552 KB
Accepted | 1 * (60 / 100) | 13 ms | 1628 KB

"""

#include <stdio.h>
int main()
{
	int n,a[100],i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		int ans=0;
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			ans+=j;
			
		}
		if(ans==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}