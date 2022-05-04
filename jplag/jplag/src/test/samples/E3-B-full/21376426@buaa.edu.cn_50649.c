"""
2022-03-27 11:39:23
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1532 KB
Accepted | 1 * (35 / 100) | 11 ms | 1632 KB
Accepted | 1 * (60 / 100) | 18 ms | 1652 KB

"""

#include<stdio.h>
int judge(int x)
{
	int i,a[10000],n=0,sum=0;
	for(i=1;i<x-1;i++)
	{
		if(x%i==0)
		{
			a[n]=i;
			n++;
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	if(sum==x)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		
	}
	for(i=0;i<n;i++)
	{
		judge(a[i]);
	}
	return 0;
}