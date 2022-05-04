"""
2022-03-26 23:44:40
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1608 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 4 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,k,a[101]={0},sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<i;j++)
	{
		sum=0;
		for(k=2;k<=a[j];k++)
		{
			if(a[j]%k==0) sum+=(a[j]/k);
		}
		if(sum==a[j]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}