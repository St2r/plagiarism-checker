"""
2022-03-28 21:44:05
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1624 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n,i,a,j,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{
		scanf("%d",&a);
		sum=0;
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			sum=sum+j;
		}
		if(sum==a) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
 }