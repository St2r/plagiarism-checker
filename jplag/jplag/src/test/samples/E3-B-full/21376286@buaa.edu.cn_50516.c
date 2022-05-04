"""
2022-03-27 11:31:43
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 3 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1628 KB

"""

#include<stdio.h>
int main()
{
	int n,x,i,j;
	int sum=0;
	int a[101];
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		a[i]=x;
	}
	
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			  sum+=j;
			}
		if(sum==a[i]) printf("YES\n");
		else printf("NO\n");
		sum=0;	
	}
	return 0;
}