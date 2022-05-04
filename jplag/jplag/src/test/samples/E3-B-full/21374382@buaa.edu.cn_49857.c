"""
2022-03-26 20:50:41
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int n,i,p,a[102],b[10002],sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(p=1;p<a[i];p++)
		{
			if(a[i]%p==0)
			{
				b[p]=p;
			}
			else b[p]=0;
			sum+=b[p];
		}
		if(sum==a[i])printf("YES\n");
		else printf("NO\n");
		sum=0; 
		
	}
}