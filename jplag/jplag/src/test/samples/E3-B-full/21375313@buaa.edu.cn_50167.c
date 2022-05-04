"""
2022-03-29 22:12:02
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1656 KB
Accepted | 1 * (35 / 100) | 0 ms | 1628 KB
Accepted | 1 * (60 / 100) | 2 ms | 1740 KB

"""

#include <stdio.h>
int main()
{
	int n,i=1,sum=0,a,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
	for(k=1;k<a;k++)
	{
		if(a % k == 0)
		{
			sum=sum+k;
		}
	}
	if(sum == a)
		printf("YES\n");
	else
		printf("NO\n");	
	sum=0;
	k=1; 
	}
	return 0;
 }