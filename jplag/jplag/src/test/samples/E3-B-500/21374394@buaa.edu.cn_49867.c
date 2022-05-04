"""
2022-03-26 14:22:02
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 3 ms | 1700 KB
Accepted | 1 * (60 / 100) | 3 ms | 1628 KB

"""

#include<stdio.h>
void memset (char *prime,int x,int n)
{
	for(int i=0;i<n;i++)
	prime[i]=1;
}
int main()
{
	int n,x;
	int j;
	int cnt =0;
	int a[1001];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int s=0,cnt=0;
		scanf("%d",&x);
		a[cnt++]=1;
		for( j=2;j*j<x;j++)
		{
			if(x%j==0)
			{
				a[cnt++]=j;
				a[cnt++]=x/j;
			}
		}
		if(j*j==x)
		a[cnt++]=j;
		for( j=0;j<cnt;j++)
		{
			s+=a[j];
		}
		if(s==x)
		printf("YES\n");
		else
		printf("NO\n");
	 } 

	return 0;
}