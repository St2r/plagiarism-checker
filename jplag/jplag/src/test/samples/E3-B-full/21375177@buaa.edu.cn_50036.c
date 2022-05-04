"""
2022-03-26 23:36:15
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1696 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 3 ms | 1624 KB

"""

#include<stdio.h>
int main()
{
	int n;
	int a[101],j=0,s=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		for(j=1;j<a[i];j++)
		{
		if(a[i]%j==0)
		{s=s+j;}
		}
		if(s==a[i])
		{
		printf("YES\n");
		s=0;
		}
		else
		{printf("NO\n");
		s=0;} 
	}
	return 0;
}