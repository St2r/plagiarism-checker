"""
2022-03-26 23:16:29
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1628 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int a[110],i,k,n,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s=0;
		for(k=1;k<a[i];k++)
		{
			if(a[i]%k==0)
			{
				s=s+k;
			}
		}
		if(s==a[i])
		printf("YES\n");
		else 
		printf("NO\n");
	}
	return 0;
}