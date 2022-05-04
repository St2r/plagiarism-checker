"""
2022-03-26 10:24:30
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1592 KB
Accepted | 1 * (35 / 100) | 3 ms | 1492 KB
Accepted | 1 * (60 / 100) | 18 ms | 1592 KB


"""

#include<stdio.h>
int main()
{
	int n,a[100000],i,j,ans=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		ans=0;
		j=1;
	while(j<=a[i]-1)
	{
		if(a[i]%j==0) {ans=ans+j;
		}
		j++;
	}
	if(ans==a[i])
	printf("YES\n");
	else printf("NO\n");
	}
	
	
}